using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tutorial : Popup
{
    [SerializeField] private GameObject tut2;
    [SerializeField] private GameObject tut3;
    [SerializeField] private GameObject tut4;
    [SerializeField] private GameObject btLeft;
    [SerializeField] private GameObject btRight;

    int currentTut = 2;
    
    
    
    
    public override void Show()
    {
        base.Show();
        tut2.SetActive(true);
        tut3.SetActive(false);
        tut4.SetActive(false);
        btLeft.gameObject.SetActive(false);
        btRight.gameObject.SetActive(true);

        LevelManager.Instance.gameState = LevelManager.GameState.NotOnPlay; //para que no se pueda jugar
        currentTut = 2; // 1 = tut1, 2 = tut2, 3 = tut3
    }

    public override void Hide()
    {
        base.Hide();
        LevelManager.Instance.gameState = LevelManager.GameState.Play; //para que se pueda jugar
    }

    public void NextTutorial()
    {
        if (currentTut == 2)
            return;
        currentTut--;
        GetTutorial();
    }
    
    public void PreviousTutorial()
    {
        if (currentTut == 4)
            return;
        currentTut++;
        GetTutorial();
    }

    private void GetTutorial()
    {
        switch (currentTut)
        {
            case 2:
                tut2.SetActive(true);
                tut3.SetActive(false);
                tut4.SetActive(false);
                btLeft.gameObject.SetActive(false);
                btRight.gameObject.SetActive(true);
                break;
            case 3:
                tut2.SetActive(false);
                tut3.SetActive(true);
                tut4.SetActive(false);
                btRight.gameObject.SetActive(true);
                btLeft.gameObject.SetActive(true);
                break;
            case 4: 
                tut2.SetActive(false);
                tut3.SetActive(false);
                tut4.SetActive(true);
                btRight.gameObject.SetActive(false);
                btLeft.gameObject.SetActive(true);
                break;
                
        }
    }
    
    
}
