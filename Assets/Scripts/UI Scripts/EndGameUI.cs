using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EndGameUI : UIBase
{
    public override void Show()
    {
        base.Show();
        LevelManager.Instance.undoSystem.Reset();
        var p = PlayerPrefs.GetInt(StringHash.CURRENT_LEVEL);
        if (LevelManager.Instance.currentLevel == p)
            PlayerPrefs.SetInt(StringHash.CURRENT_LEVEL, p + 1);
        SoundManager.Instance.Play("EndGame");
        SoundManager.Instance.Play("Particle");
        SoundManager.Instance.MusicFadeIn(0.5f, 0.5f);
    }

    public void HomeButton()
    {
        Hide();
        UIManager.Instance.MainMenuUI.Show();
        LevelManager.Instance.generator.ClearLevel();
        SoundManager.Instance.Play("ButtonTap");
    }

    public void NextLevelButton()
    {
        var p = PlayerPrefs.GetInt(StringHash.CURRENT_LEVEL);
        if (p > 10)
        {
            UIManager.Instance.Popup.Show("Out of content", "You have completed all levels.\nThank you for playing!");
            Hide();
            UIManager.Instance.MainMenuUI.Show();
            LevelManager.Instance.generator.ClearLevel();
            SoundManager.Instance.Play("ButtonTap");
            PlayerPrefs.SetInt(StringHash.CURRENT_LEVEL, 10
            
            );
            return;
        }
        
        Hide();
        LevelManager.Instance.LoadNextLevel();
        SoundManager.Instance.Play("ButtonTap");
    }
}