using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tutorial : Popup
{
    [SerializeField] private GameObject tut1;
    [SerializeField] private GameObject tut2;
    [SerializeField] private GameObject tut3;
    
    int currentTut = 0;
    
    public override void Show()
    {
        base.Show();
        tut1?.SetActive(true);
        tut2.SetActive(false);
        tut3.SetActive(false);
        currentTut = 1; // 1 = tut1, 2 = tut2, 3 = tut3
    }

    public void NextTutorial()
    {
        if (currentTut == 1)
            return;
        currentTut--;
        GetTutorial();
    }
    
    public void PreviousTutorial()
    {
        if (currentTut == 3)
            return;
        currentTut++;
        GetTutorial();
    }

    private void GetTutorial()
    {
        switch (currentTut)
        {
            case 1: 
                tut1?.SetActive(true);
                tut2.SetActive(false);
                tut3.SetActive(false);
                break;
            case 2: 
                tut1?.SetActive(false);
                tut2.SetActive(true);
                tut3.SetActive(false);
                break;
            case 3:
                tut1?.SetActive(false);
                tut2.SetActive(false);
                tut3.SetActive(true);
                break;
        }
    }
    
    
}
