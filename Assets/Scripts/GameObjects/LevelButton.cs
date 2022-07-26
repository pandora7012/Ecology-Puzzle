using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class LevelButton : MonoBehaviour
{

    [SerializeField] private int level;
    [SerializeField] private TextMeshProUGUI levelText;
    
    [SerializeField] private Image sprite;

    [SerializeField] private Color color;
    [SerializeField] private Color color2; //color of the button when it is locked

    [SerializeField] private ParticleSystem pa;

    private void OnEnable()
    {
        var ip = PlayerPrefs.GetInt(StringHash.CURRENT_LEVEL);
        sprite.color = Color.white;
        if (ip == level)
        {
            sprite.sprite = PoolingSystem.Instance.SpriteContainer.levelButtonOn;
            levelText.color = color; 
            
        }
        else if (ip > level)
        {
            sprite.sprite = PoolingSystem.Instance.SpriteContainer.levelButtonPassed;
            levelText.color = color2; 
        }
        else
            sprite.color = Color.gray;
        pa.gameObject.SetActive(ip == level);
    }


    private void Start()
    {
        levelText.text = level.ToString();
    }

    public void LevelButtonEventClick()
    {
        var ip = PlayerPrefs.GetInt(StringHash.CURRENT_LEVEL);
        if (ip < level)
            return;
        SoundManager.Instance.Play("ButtonTap");
        UIManager.Instance.ChooseLevelUI.Hide();
        LevelManager.Instance.gameState = LevelManager.GameState.Play;
        LevelManager.Instance.generator.GenerateLevel(level);
        UIManager.Instance._gameplayUI.Show();
        
    }
}
