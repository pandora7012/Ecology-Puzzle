using System;
using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;

public class GameManager : Singleton<GameManager>
{
    public PoolingSystem pooling; // 오브젝트 풀링 시스템
    public string version; //version of the game


    protected override void InitAwake()
    {
        Application.targetFrameRate = 60;
        QualitySettings.vSyncCount = 0;
     //   Debug.LogWarning("GameManager Start");
        version = Application.version;
        SetDefaultPlayerPref();
    }

    [Button("Bypass level")]
    public void BypassLevel(int level)
    {
        PlayerPrefs.SetInt(StringHash.CURRENT_LEVEL, level);
    }

    private void SetDefaultPlayerPref()
    {
        if (!PlayerPrefs.HasKey(StringHash.CURRENT_LEVEL))
            PlayerPrefs.SetInt(StringHash.CURRENT_LEVEL, 1);
        if (!PlayerPrefs.HasKey(StringHash.MUSIC))
            PlayerPrefs.SetInt(StringHash.MUSIC, 1);
        if (!PlayerPrefs.HasKey(StringHash.SOUND_EFFECT))
            PlayerPrefs.SetInt(StringHash.SOUND_EFFECT, 1);
    }
}

[System.Serializable]
public static class StringHash
{
    public static string CURRENT_LEVEL = "CurrentLevel";
    public static string MUSIC = "Music";
    public static string SOUND_EFFECT = "Sfx";
}