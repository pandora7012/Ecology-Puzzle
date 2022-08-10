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
    public int numberOfLevel;

    public void AddObjectToMap(ObjectBase obj, int x, int y)
    {
        ObjBase[x, y] = obj;
        var p = obj.TryGetComponent(out Objective op);
        if (p)
            objectives.Add(op);
    }

    public bool IsMovable(Vector2 mainPos, int size, int angle, bool isRightDirection)
    {
        var x = (int)mainPos.x;
        var y = (int)mainPos.y;
        int haft = size / 2;
        int offsetX = x - haft;
        int offsetY = y - haft;

        // Checking all object in the movepad
        for (int i = x - haft; i <= x + haft; i++)
        {
            for (int j = y - haft; j <= y + haft; j++)
            {
                if (ObjBase[i, j] is null || (i == x && j == y))
                    continue;

                if (ObjBase[i, j].firm)
                    continue;

                // Calculate relative grid position
                int ip = i - offsetX;
                int jp = j - offsetY;

                // Rotate case
                switch (isRightDirection)
                {
                    // Clockwise 90
                    case true when angle == 90:
                        {
                            int tX = jp + offsetX;
                            int tY = size - ip + offsetY - 1;
                            if (ObjBase[tX, tY] is not null)
                                if (ObjBase[tX, tY].firm)
                                    return false;
                            break;
                        }
                    // Counter-Clockwise 90
                    case false when angle == 90:
                        {
                            int tX = size - jp + offsetX - 1;
                            int tY = ip + offsetY;
                            if (ObjBase[tX, tY] is not null)
                                if (ObjBase[tX, tY].firm)
                                    return false;
                            break;
                        }
                    // 180
                    default:
                        {
                            int tX = size - ip + offsetX - 1;
                            int tY = size - jp + offsetY - 1;
                            if (ObjBase[tX, tY] is not null)
                                if (ObjBase[tX, tY].firm)
                                    return false;
                            break;
                        }
                }
            }
        }

        return true;
    }


    public void MoveObject(Vector2 mainPos, Vector2 center, int size, int angle, bool isRightDirection)
    {

        var x = (int)mainPos.x;
        var y = (int)mainPos.y;
        int haft = size / 2;
        var movingObject = new List<ObjectBase>();
        var futurePosition = new List<Vector2>();
        int offsetX = x - haft;
        int offsetY = y - haft;
        
        // Moving all object in the movepad
        for (int i = x - haft; i <= x + haft; i++)
        {
            for (int j = y - haft; j <= y + haft; j++)
            {
                var obj = ObjBase[i, j];
                if (obj is null || (i == x && j == y))
                    continue;

                if (obj.firm)
                    continue;

                // Calculate relative grid position
                int ip = i - offsetX;
                int jp = j - offsetY;

                // Rotate case
                switch (isRightDirection)
                {
                    // Clockwise 90
                    case true when angle == 90:
                        {
                            int tX = jp + offsetX;
                            int tY = size - ip + offsetY - 1;
                            movingObject.Add(obj);
                            futurePosition.Add(new Vector2(tX, tY));
                            obj.RotateMove(center, animRuntime, -90);
                            ObjBase[i, j] = null;
                            break;
                        }
                    // Counter-Clockwise 90
                    case false when angle == 90:
                        {
                            int tX = size - jp + offsetX - 1;
                            int tY = ip + offsetY;
                            movingObject.Add(obj);
                            futurePosition.Add(new Vector2(tX, tY));
                            obj.RotateMove(center, animRuntime, 90);
                            ObjBase[i, j] = null;
                            break;
                        }
                    // 180
                    default:
                        {
                            int tX = size - ip + offsetX - 1;
                            int tY = size - jp + offsetY - 1;
                            movingObject.Add(obj);
                            futurePosition.Add(new Vector2(tX, tY));
                            obj.RotateMove(center, animRuntime, -180);
                            ObjBase[i, j] = null;
                            break;
                        }
                }
            }
        }
        
        SoundManager.Instance.Play("MovingTree");

        // Set moving object into new position
        for (int i = 0; i < movingObject.Count; i++)
            movingObject[i].ChangePositionInGrid(futurePosition[i]);

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