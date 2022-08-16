using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainMenuUI : UIBase
{
    public override void Show()
    {
        base.Show();
        SoundManager.Instance.MusicFadeIn(0.5f, 1f);
    }

    public void PlayButton()
    {
        Hide();
        LevelManager.Instance.gameState = LevelManager.GameState.Play;
        PoolingSystem.Instance.handTut.gameObject.SetActive(false);
        var level = PlayerPrefs.GetInt(StringHash.CURRENT_LEVEL);
        LevelManager.Instance.generator.GenerateLevel(level);
        UIManager.Instance._gameplayUI.Show();

        SoundManager.Instance.Play("ButtonTap");
    }


    public void ChooseLevelButton()
    {
        Hide();
        UIManager.Instance.ChooseLevelUI.Show();
        SoundManager.Instance.Play("ButtonTap");
    }


    public void SettingsButton()
    {
        //Hide();
        UIManager.Instance.settingUIMain.Show();
        SoundManager.Instance.Play("ButtonTap");
    }

    public void InfoButton()
    {
        UIManager.Instance.info.Show();
    }
}