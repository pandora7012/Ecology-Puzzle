using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class SettingUI : Popup
{
    [SerializeField] private Sprite soundOn;
    [SerializeField] private Sprite soundOff;
    [SerializeField] private Sprite musicOn;
    [SerializeField] private Sprite musicOff;

    [SerializeField] private Image sound;
    [SerializeField] private Image music;



    public void UpdateUI()
    {
        sound.sprite = SoundManager.Instance.effectMute ? soundOff : soundOn;
        music.sprite = SoundManager.Instance.musicMute ? musicOff : musicOn;
    }


    public void BackHomeButton()
    {
        Hide();
        UIManager.Instance.MainMenuUI.Show();
        LevelManager.Instance.gameState = LevelManager.GameState.NotOnPlay;
        UIManager.Instance._gameplayUI.Hide();
        LevelManager.Instance.generator.ClearLevel();
        SoundManager.Instance.Play("ButtonTap");
    }


    public void Replay()
    {
        Hide();
        var level = LevelManager.Instance.currentLevel;
        LevelManager.Instance.generator.ClearLevel();
        LevelManager.Instance.generator.GenerateLevel(level);
        UIManager.Instance._gameplayUI.Show();
        SoundManager.Instance.Play("ButtonTap");
    }

    public override void Show()
    {
        base.Show();
        UpdateUI();
        LevelManager.Instance.gameState = LevelManager.GameState.NotOnPlay;
    }

    public override void Hide()
    {
        base.Hide();
        LevelManager.Instance.gameState = LevelManager.GameState.Play;
    }
}