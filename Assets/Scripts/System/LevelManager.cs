using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEditor;
using UnityEngine;
using UnityEngine.UIElements;

public class LevelManager : Singleton<LevelManager>
{
    [Header("Level Component")] public LevelGenerator generator;
    public Camera mainCam;

    [ShowInInspector] public ObjectBase[,] ObjBase; // 오브젝트 베이스
    public List<Vector2> dangerTilePos;


    public enum GameState
    {
        Play,
        Pause
    }

    public GameState gameState;

    public void AddObjectToMap(ObjectBase obj, int x, int y)
    {
        ObjBase[x, y] = obj;
//        Debug.Log(x + " ," + y);
    }


    public void MoveObject(Vector2 mainPos, int size, int angle, bool isRightDirection)
    {
        var x = (int)mainPos.x;
        var y = (int)mainPos.y;
        int haft = size / 2;
//        Debug.Log( mainPos);
        var tmp = new List<ObjectBase>();
        var tmp2 = new List<Vector2>();
//        Debug.Log("RANGE X :" + (x - haft) + " , " + (x + haft));
     //   Debug.Log("RANGE Y :" + (y - haft) + " , " + (y + haft));

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
                Debug.Log(ip + "afsf" + jp);
                if (isRightDirection && angle == 90)
                {
                    int tX = jp + offsetX;
                    int tY = size - ip + offsetY - 1;
                    tmp.Add(ObjBase[i, j]);
                    tmp2.Add(new Vector2(tX, tY));
                    Debug.Log(tX + " " + tY);
                    ObjBase[i, j].MoveObject(generator.GetTile(tX, tY).transform.position, 1f);
                    ObjBase[i, j] = null;
                }

                else if (!isRightDirection && angle == 90)
                {
                    int tX = size - jp + offsetX - 1;
                    int tY =  ip + offsetY;
                    tmp.Add(ObjBase[i, j]);
                    tmp2.Add(new Vector2(tX, tY));
                    Debug.Log(tX + " " + tY);
                    ObjBase[i, j].MoveObject(generator.GetTile(tX, tY).transform.position, 1f);
                    ObjBase[i, j] = null;
                }
            }
        }

        for (int i = 0;
             i < tmp.Count;
             i++)
        {
            // Debug.Log(tmp[i].PositionInGrid);
            tmp[i].ChangePositionInGrid(tmp2[i]);
        }
    }
}