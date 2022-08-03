using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;

public class UndoSystem : MonoBehaviour
{
    private Stack<MovingPlatform> movingPlatforms;


    public void Record(MovingPlatform movingPlatform)
    {
        movingPlatforms ??= new Stack<MovingPlatform>();
        movingPlatforms.Push(movingPlatform);
    }

    public void Undo()
    {
        if (movingPlatforms is not { Count: > 0 } || LevelManager.Instance.gameState != LevelManager.GameState.Play)
            return;
        var movingPlatform = movingPlatforms.Pop();
        movingPlatform.UndoRotateExecute();
    }

    public void Reset()
    {
        movingPlatforms.Clear();
    }
}



