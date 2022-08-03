using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainMenuUI : UIBase
{
    
    
    
    public void PlayButton()
    {
        Hide();
        var level = PlayerPrefs.GetInt("CurrentLevel");
        LevelManager.Instance.generator.GenerateLevel(level);
        UIManager.Instance._gameplayUI.Show();
        LevelManager.Instance.gameState = LevelManager.GameState.Play;
    }

    
}
