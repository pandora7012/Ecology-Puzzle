using System;
using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.EventSystems;

public class InputManager : MonoBehaviour
{
    private void Update()
    {
        if (Input.touchCount != 1 || Input.touches[0].phase != TouchPhase.Began /*|| EventSystem.current.IsPointerOverGameObject()*/ ) return;
        var state = LevelManager.Instance.gameState;

        switch (state)
        {
            case LevelManager.GameState.Play:
                Debug.Log("Input");
                ConfirmPlatform();
                break;
            default:
                break;
        }
    }

    void ConfirmPlatform()
    {
        var dir = Input.GetTouch(0).position;
        var origin = LevelManager.Instance.mainCam.ScreenPointToRay(dir);
        var hit = Physics2D.GetRayIntersection(origin);
        var platform = hit.collider.TryGetComponent(out MovingPlatform mp);
        if (platform is false) return;
//        Debug.Log("rotate");
        mp?.RotateExecute();
    }
    
    [Button("Test")]
    private void Test(int p)
    {
        PlayerPrefs.SetInt(StringHash.CURRENT_LEVEL , p);
    }
}