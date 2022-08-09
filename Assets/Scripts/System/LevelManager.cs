using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Sirenix.OdinInspector;
using UnityEditor;
using UnityEngine;
using UnityEngine.UIElements;

public class LevelManager : Singleton<LevelManager>
{
    [Header("Level Component")] public LevelGenerator generator;
    public Camera mainCam;
    public CameraController cameraController;
    public UndoSystem undoSystem;

    [ShowInInspector] public ObjectBase[,] ObjBase; // 오브젝트 베이스
    public List<Vector2> dangerTilePos;
    public List<Objective> objectives;

    public enum GameState
    {
        Play,
        NotOnPlay,
        AnimOnPlay
    }

    public GameState gameState;
    public float animRuntime;
    public int currentLevel;

    public void AddObjectToMap(ObjectBase obj, int x, int y)
    {
        ObjBase[x, y] = obj;
        var p = obj.TryGetComponent(out Objective op);
        if (p)
            objectives.Add(op);
    }


    public void MoveObject(Vector2 mainPos, int size, int angle, bool isRightDirection)
    {
        
        
        
        var x = (int)mainPos.x;
        var y = (int)mainPos.y;
        int haft = size / 2;
        var tmp = new List<ObjectBase>();
        var tmp2 = new List<Vector2>();
        int offsetX = x - haft;
        int offsetY = y - haft; // 시작 위치
        
        for (int i = x - haft; i <= x + haft; i++)
        {
            for (int j = y - haft; j <= y + haft; j++)
            {
                if (ObjBase[i, j] is null || (i == x && j == y))
                    continue;
                int ip = i - offsetX;
                int jp = j - offsetY;
                switch (isRightDirection)
                {
                    case true when angle == 90:
                    {
                        int tX = jp + offsetX;
                        int tY = size - ip + offsetY - 1;
                        tmp.Add(ObjBase[i, j]);
                        tmp2.Add(new Vector2(tX, tY));
                        ObjBase[i, j].MoveObject(generator.GetTile(tX, tY).transform.position, animRuntime, false);
                        ObjBase[i, j] = null;
                        break;
                    }
                    case false when angle == 90:
                    {
                        int tX = size - jp + offsetX - 1;
                        int tY = ip + offsetY;
                        tmp.Add(ObjBase[i, j]);
                        tmp2.Add(new Vector2(tX, tY));
                        ObjBase[i, j].MoveObject(generator.GetTile(tX, tY).transform.position, animRuntime, false);
                        ObjBase[i, j] = null;
                        break;
                    }
                    default:
                    {
                        int tX = size - ip + offsetX - 1;
                        int tY = size - jp + offsetY - 1;
                        tmp.Add(ObjBase[i, j]);
                        tmp2.Add(new Vector2(tX, tY));
                        ObjBase[i, j].MoveObject(generator.GetTile(tX, tY).transform.position, animRuntime, true);
                        ObjBase[i, j] = null;
                        break;
                    }
                }
            }
        }
        
        SoundManager.Instance.Play("MovingTree");

        for (int i = 0; i < tmp.Count; i++)
            tmp[i].ChangePositionInGrid(tmp2[i]);

        StartCoroutine(CheckLevelSuccess() ? ChangeStateToEndgame() : ChangeStateToAnimOnPlay());
    }


    public void ResetData()
    {
        dangerTilePos.Clear();
        objectives.Clear();
    }

    private bool CheckLevelSuccess()
    {
        return objectives.Select(objective1 => objective1.PositionInGrid)
            .All(objective => !dangerTilePos.Any(i => i.Equals(objective)));
    }

    private IEnumerator ChangeStateToAnimOnPlay()
    {
        gameState = GameState.AnimOnPlay;
        yield return new WaitForSeconds(animRuntime);
        gameState = GameState.Play;
    }

    private IEnumerator ChangeStateToEndgame()
    {
        gameState = GameState.NotOnPlay;
        yield return new WaitForSeconds(animRuntime + 1f);
        LevelSuccess();
    }

    private void LevelSuccess()
    {
        UIManager.Instance._gameplayUI.Hide();
        UIManager.Instance.EndGameUI.Show();
    }

    public void LoadNextLevel()
    {
        generator.ClearLevel();
        generator.GenerateLevel(currentLevel + 1);
        gameState = GameState.Play;
        UIManager.Instance._gameplayUI.Show();
        UIManager.Instance.EndGameUI.Hide();
    }
}