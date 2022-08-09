using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToggleAudio : MonoBehaviour
{
    [SerializeField] private bool isMusicToggle;
    [SerializeField] private bool isSfxToggle;


    public void Toggle()
    {
        if (isMusicToggle)
            SoundManager.Instance.ToggleEffect();

        if (isSfxToggle)
            SoundManager.Instance.ToggleMusic();
        UIManager.Instance.SettingUI.UpdateUI();
        UIManager.Instance.settingUIMain.UpdateUI();
    }
}