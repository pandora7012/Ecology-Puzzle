using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : Singleton<GameManager>
{
    
    public PoolingSystem pooling; // 오브젝트 풀링 시스템
    public string version; //version of the game
    public override void InitAwake()
    {
        Application.targetFrameRate = 60;
        version = Application.version;
        SetDefaultPlayerPref();
    }

    private void SetDefaultPlayerPref()
    {
        if (!PlayerPrefs.HasKey("CurrentLevel"))
            PlayerPrefs.SetInt("CurrentLevel", 1);
    }
}
