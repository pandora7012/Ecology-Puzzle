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
        SoundManager.Instance.MusicFadeOut(0.5f, 0.1f);
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
        SoundManager.Instance.MusicFadeIn(0.5f, 0.4f);
        var p = PlayerPrefs.GetInt(StringHash.CURRENT_LEVEL);
        if (p > LevelManager.Instance.numberOfLevel)
        {
            UIManager.Instance.Popup.Show("Out of content", "You have completed all levels.\nThank you for playing!");
            Hide();
            UIManager.Instance.MainMenuUI.Show();
            LevelManager.Instance.generator.ClearLevel();
            SoundManager.Instance.Play("ButtonTap");
            PlayerPrefs.SetInt(StringHash.CURRENT_LEVEL, LevelManager.Instance.numberOfLevel
            
            );
            return;
        }
        
        Hide();
        LevelManager.Instance.LoadNextLevel();
        SoundManager.Instance.Play("ButtonTap");
    }
}