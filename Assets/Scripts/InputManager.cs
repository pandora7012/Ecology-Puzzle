using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class InputManager : MonoBehaviour
{
    private void Update()
    {
        if (Input.touchCount != 1 || Input.touches[0].phase != TouchPhase.Began) return;
        var state = LevelManager.Instance.gameState;

        switch (state)
        {
            case LevelManager.GameState.Play:
                ConfirmPlatform();
                break;
            case LevelManager.GameState.Pause:
                // do st
                break;
        }
    }

    void ConfirmPlatform()
    {
        var dir = Input.GetTouch(0).position;
        var origin = LevelManager.Instance.mainCam.ScreenPointToRay(dir);
        var hit = Physics2D.GetRayIntersection(origin);

        var platform = hit.collider.TryGetComponent(out MovingPlatform mp);
        if (platform)
        {
            Debug.Log("rotate");
          //  LevelManager.Instance.gameState = (LevelManager.GameState.);
            mp.RotateExecute();
        }
    }
}