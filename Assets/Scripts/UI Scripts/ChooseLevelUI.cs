using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChooseLevelUI : UIBase
{
    public void Back()
    {
        Hide();
        UIManager.Instance.MainMenuUI.Show();
    }
}
