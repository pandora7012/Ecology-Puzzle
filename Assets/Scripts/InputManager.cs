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
        var state = LevelManager.Instance.gameState;
        
        if (Input.touchCount != 1 ||
            Input.touches[0].phase != TouchPhase.Began || state != LevelManager.GameState.Play
            /*|| EventSystem.current.IsPointerOverGameObject()*/) return;
        PoolingSystem.Instance.handTut.gameObject.SetActive(false);
        UIManager.Instance.bubbleTuT.gameObject.SetActive(false);
        

        switch (state)
        {
            case LevelManager.GameState.Play:
                ConfirmPlatform();
            //    Debug.Log("dadsad");
                break;
            default:
                break;
        }
    }

    void ConfirmPlatform()
    {
        var state = LevelManager.Instance.gameState;
        if (state != LevelManager.GameState.Play) return;
        var dir = Input.GetTouch(0).position;
        var origin = LevelManager.Instance.mainCam.ScreenPointToRay(dir);
        var hit = Physics2D.GetRayIntersection(origin);
        if (hit == false) return;
        if (hit.collider is null) return;
        var platform = hit.collider.TryGetComponent(out MovingPlatform mp);
        if (platform is false) return;
        mp?.RotateExecute();
    }

    [Button("Test")]
    private void Test(int p)
    {
        PlayerPrefs.SetInt(StringHash.CURRENT_LEVEL, p);
    }
}