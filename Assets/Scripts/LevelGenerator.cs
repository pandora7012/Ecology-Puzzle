using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;

public class LevelGenerator : MonoBehaviour
{
    [Header("Prefabs and GameObject")]
    [SerializeField] private GameObject tiles;
    [SerializeField] private GameObject backGround; 
    [SerializeField] private GameObject mainGround; 
    [SerializeField] private GameObject foreGround;
    [SerializeField] private GameObject planeContainer;
    
    [Header("Internal Component")]
    [ShowInInspector] private Tile[,] _tileMatrix;
    private int _rowNum, _colNum;


    #region Init Level

    [Button("Init Level")]
    public void InitLevel(int rowNum, int colNum)
    {
        this._rowNum = rowNum;
        this._colNum = colNum;
        _tileMatrix = new Tile[_rowNum, _colNum];
        GenerateMap();
    }

    private void GenerateMap()
    {
        for (int i = 0; i < _rowNum; i++)
        {
            for (int j = 0; j < _colNum; j++)
            {
                var obj = PoolingSystem.Instance.GetTile();
                obj.transform.parent = planeContainer.transform;
                _tileMatrix[i, j] = obj;
                obj.SetSpriteColor( (i+j)%2 == 0 ?1:2);
                obj.gameObject.SetActive(true);
                obj.transform.localPosition = new Vector3(i - _rowNum/2,j - _colNum/2, 0);
            }
        }
    }


    private void GenerateItem()
    {
        
        for (int i = 0; i < _rowNum; i++)
        {
            for (int j = 0; j < _colNum; j++)
            {
                var obj = PoolingSystem.Instance.GetTile();
                obj.transform.parent = planeContainer.transform;
                _tileMatrix[i, j] = obj;
                obj.gameObject.SetActive(true);
             // obj.SetSpriteColor( (i+j)%2 == 0 ? Color.green : Color.yellow );
                obj.transform.localPosition = new Vector3(i - _rowNum/2,j - _colNum/2, 0);
            }
        }
    }
    #endregion
    
    
    
    

}