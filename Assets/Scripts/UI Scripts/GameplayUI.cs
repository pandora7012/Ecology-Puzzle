using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class GameplayUI : UIBase
{
    [SerializeField] private TextMeshProUGUI levelText;

    public void UpdateUI()
    {
    }

    public void SetLevelText(int level)
    {
        levelText.text = "Level " + level;
    }
}
