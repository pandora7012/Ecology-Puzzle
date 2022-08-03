using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EndGameUI : UIBase
{
    public override void Show()
    {
        base.Show();
        LevelManager.Instance.undoSystem.Reset();
    }

    public void HomeButton()
    {
        Hide();
        UIManager.Instance.MainMenuUI.Show();
    }

    public void NextLevelButton()
    {
        Hide();
        LevelManager.Instance.LoadNextLevel();
    }
}
