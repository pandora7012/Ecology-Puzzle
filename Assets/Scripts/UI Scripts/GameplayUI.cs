using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class GameplayUI : UIBase
{
    [SerializeField] private TextMeshProUGUI levelText;


    public override void Show()
    {
        base.Show();
        if (PlayerPrefs.GetInt(StringHash.FIRST_OPEN) == 0)
        {
            PlayerPrefs.SetInt(StringHash.FIRST_OPEN, 1);
            TutorialButton();
            PoolingSystem.Instance.handTut.gameObject.SetActive(true);
        }
    }

    public void UpdateUI()
    {
    }

    public void SetLevelText(int level)
    {
        levelText.text = level.ToString();
    }

    public void PauseButton()
    {
        UIManager.Instance.SettingUI.Show();
        SoundManager.Instance.Play("ButtonTap");
    }
    
    
    public void RestartButton()
    {
        var level = LevelManager.Instance.currentLevel;
        LevelManager.Instance.generator.ClearLevel();
        LevelManager.Instance.generator.GenerateLevel(level);
        SoundManager.Instance.Play("ButtonTap");

    }

    public void TutorialButton()
    {
        UIManager.Instance.tutorial.Show();
    }
  
}
