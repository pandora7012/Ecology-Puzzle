using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIManager : Singleton<UIManager>
{
    [SerializeField] public GameplayUI _gameplayUI;
    [SerializeField] public MainMenuUI MainMenuUI;
    [SerializeField] public EndGameUI EndGameUI;
    [SerializeField] public SettingUI SettingUI;
    [SerializeField] public Popup Popup;
    [SerializeField] public ChooseLevelUI ChooseLevelUI;
    [SerializeField] public SettingUI settingUIMain;
    [SerializeField] public Tutorial tutorial;
    [SerializeField] public Popup info;

    [SerializeField] public BubbleTuT bubbleTuT;

    [SerializeField] public Image background; 
}
