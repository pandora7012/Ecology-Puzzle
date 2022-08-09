using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using TMPro;
using UnityEngine;

public class Popup : UIBase
{
    public TextMeshProUGUI title;
    public TextMeshProUGUI description;
    public RectTransform mainPopup;
    [SerializeField] private bool OnAnim; 
    
    
    public void Show(string title, string description)
    {
        this.title.text = title;
        this.description.text = description;
        LevelManager.Instance.gameState = LevelManager.GameState.NotOnPlay;
        gameObject.SetActive(true);
        mainPopup.DOScale(1, 0.25f).From(0).SetEase(Ease.OutBack);
        
    }

    public override void Show()
    {
        base.Show();
        OnAnim = false;
        mainPopup.DOScale(1, 0.25f).From(0).SetEase(Ease.OutBack);
        SoundManager.Instance.Play("ButtonTap");
    }

    public override void Hide()
    {
        if (OnAnim)
            return;
        OnAnim = true;
        
        mainPopup.DOScale(0, 0.25f).From(1).SetEase(Ease.InBack).OnComplete(() => { base.Hide();
            OnAnim = false;
        });
        SoundManager.Instance.Play("ButtonTap");
    }
}