﻿using System.Collections.Generic;
using System.Linq;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.UI;

public class LevelGenerator : MonoBehaviour
{
    [Header("Prefabs and GameObject")] [SerializeField]
    private GameObject tiles;

    [SerializeField] private GameObject backGround;
    [SerializeField] private GameObject mainGround;
    [SerializeField] private GameObject foreGround;
    [SerializeField] private GameObject planeContainer;
    
    

    [Header("Level Info")] [SerializeField]
    private string[] infoLevels;

    [SerializeField] private TextAsset levelInformationAsset;

    [Header("Internal Component")] [ShowInInspector]
    private Tile[,] _tileMatrix;

    private int _rowNum, _colNum;
    private readonly Vector3 diff = new Vector3(0, 0.025f, 0);

    #region Get Level Info

    private void Start()
    {
        infoLevels = levelInformationAsset.text.Split('\n');
        //GenerateLevel();
    }

    [Button("generate level")]
    public void GenerateLevel(int level)
    {
        var infoLevel = new string[7];
        LevelManager.Instance.currentLevel = level;
        UIManager.Instance._gameplayUI.SetLevelText(level);
        for (int i = 0; i < 7; i++)
        {
            infoLevel[i] = infoLevels[(level - 1) * 7 + i];
        }

        GenerateLevel(infoLevel);
    }

    public Tile GetTile(int x, int y)
    {
        return _tileMatrix[x, y];
    }

    [Button("Test GetLevel")]
    public void GenerateLevel(string[] info)
    {
        //Generate map
        var tmp = new List<string>();
        tmp = info[0].Split().ToList();
        _rowNum = int.Parse(tmp[0]);
        _colNum = int.Parse(tmp[1]);
        tmp.Clear();
        _tileMatrix = new Tile[_rowNum, _colNum];
        LevelManager.Instance.ObjBase = new ObjectBase[_rowNum, _colNum];
        var the = 0;

        var  level = LevelManager.Instance.currentLevel;

        the = level switch
        {
            1 => 1,
            2 => 1,
            3 => 2, 
            4 => 2,
            _ => Random.Range(0, 10) < 5 ? the = 1 : the = 2
        };

        UIManager.Instance.bubbleTuT.gameObject.SetActive(level is 1 or 3);
        
        UIManager.Instance.background.sprite = the == 1
            ? PoolingSystem.Instance.SpriteContainer.bg1
            : PoolingSystem.Instance.SpriteContainer.bg2;
        
        GenerateMap(the);
        LevelManager.Instance.cameraController.SetSizeAndPos(_colNum + 1.3f,
            _colNum % 2 == 0 ? new Vector3(-0.5f, 0.1f, -10) : new Vector3(0, 0.1f, -10));


        // get Objective Info
        tmp = info[1].Split().ToList();
        GenerateObjective(tmp, the);

        // get barrier
        tmp = info[2].Split().ToList();
        GenerateFirm(tmp, the);

        // get dangerAreaPos; 
        tmp = info[3].Split().ToList();
        GenerateDangerArea(tmp, the);

        // get MovePad

        tmp = info[4].Split().ToList();
        GenerateMovingPlatform1(tmp, the);

        tmp = info[5].Split().ToList();
        GenerateMovingPlatform2(tmp, the);

        tmp = info[6].Split().ToList();
        GenerateMovingPlatform3(tmp, the);
    }

    #endregion

    #region Init Level

    private void GenerateMap(int theme)
    {
        for (int i = 0; i < _rowNum; i++)
        {
            for (int j = 0; j < _colNum; j++)
            {
                var obj = PoolingSystem.Instance.GetTile();
                obj.transform.parent = planeContainer.transform;
                _tileMatrix[i, j] = obj;

                obj.gameObject.SetActive(true);
                obj.transform.localPosition = new Vector3(j - _colNum / 2, -1f + 1f * _rowNum / 2 - i, 0);
                obj.SetIsBackgroundColor((i + j) % 2 == 0 ? 1 : 2, theme);
            }
        }
    }

    private void GenerateObjective(List<string> tmp, int the)
    {
        tmp.RemoveAt(tmp.Count - 1);
        foreach (var p in tmp)
        {
            var i = p.Split('-');
            var i1 = int.Parse(i[0]);
            var i2 = int.Parse(i[1]);
            var obj = PoolingSystem.Instance.GetObjective();
            obj.Init(_tileMatrix[i1, i2].transform.position, mainGround.transform, new Vector2(i1, i2), the);
        }
    }

    private void GenerateFirm(List<string> tmp, int theme)
    {
        tmp.RemoveAt(tmp.Count - 1);
        if (tmp.Count > 0 && tmp[0] != "#")
        {
            foreach (var p in tmp)
            {
                Debug.Log(p);
                var i = p.Split('-');
                var i1 = int.Parse(i[0]);
                var i2 = int.Parse(i[1]);
                var obj = PoolingSystem.Instance.GetFirm();
                obj.Init(_tileMatrix[i1, i2].transform.position, mainGround.transform, new Vector2(i1, i2), theme);
            }
        }
    }

    private void GenerateDangerArea(List<string> tmp, int theme)
    {
        tmp.RemoveAt(tmp.Count - 1);
        foreach (var p in tmp)
        {
            var i = p.Split('-');
            var i1 = int.Parse(i[0]);
            var i2 = int.Parse(i[1]);
            var pos = new Vector2(i1, i2);
            LevelManager.Instance.dangerTilePos.Add(pos);
            _tileMatrix[i1, i2].SetToDangerArea(theme);
        }
    }

    private void GenerateMovingPlatform1(List<string> tmp, int theme)
    {
        tmp.RemoveAt(tmp.Count - 1);
        if (tmp.Count > 0 && tmp[0] != "#")
        {
            foreach (var p in tmp)
            {
                var i = p.Split('-');
                var i1 = int.Parse(i[0]);
                var i2 = int.Parse(i[1]);
                var i3 = int.Parse(i[2]);
                var obj = PoolingSystem.Instance.GetMovingPlatform();
                obj.Init(_tileMatrix[i1, i2].transform.position + diff, mainGround.transform, new Vector2(i1, i2), 0);
                obj.Init(i3, 90, false, theme);
            }
        }
    }

    private void GenerateMovingPlatform2(List<string> tmp,int theme)
    {
        tmp.RemoveAt(tmp.Count - 1);
        if (tmp.Count > 0 && tmp[0] != "#")
        {
            foreach (var p in tmp)
            {
                var i = p.Split('-');
                var i1 = int.Parse(i[0]);
                var i2 = int.Parse(i[1]);
                var i3 = int.Parse(i[2]);
                var obj = PoolingSystem.Instance.GetMovingPlatform();
                obj.Init(_tileMatrix[i1, i2].transform.position + diff, mainGround.transform, new Vector2(i1, i2), 0);
                obj.Init(i3, 90, true, theme);
            }
        }
    }

    private void GenerateMovingPlatform3(List<string> tmp,int theme)
    {
        tmp.RemoveAt(tmp.Count - 1);
        if (tmp.Count > 0 && tmp[0] != "#")
        {
            foreach (var p in tmp)
            {
                var i = p.Split('-');
                var i1 = int.Parse(i[0]);
                var i2 = int.Parse(i[1]);
                var i3 = int.Parse(i[2]);
                var obj = PoolingSystem.Instance.GetMovingPlatform();
                obj.Init(_tileMatrix[i1, i2].transform.position + diff, mainGround.transform, new Vector2(i1, i2), 0);
                obj.Init(i3, 180, false, theme);
            }
        }
    }

    #endregion

    #region Clear Level

    [Button("ClearMap")]
    public void ClearLevel()
    {
        LevelManager.Instance.ResetData();
        foreach (var obj in _tileMatrix)
        {
            obj?.gameObject.SetActive(false);
        }

        foreach (var obj in LevelManager.Instance.ObjBase)
        {
            obj?.gameObject.SetActive(false);
        }

        Observer.ResetObjectBase?.Invoke();
    }

    #endregion
}