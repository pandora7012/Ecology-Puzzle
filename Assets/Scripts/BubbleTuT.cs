using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using TMPro;
using UnityEngine;

public class BubbleTuT : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI mainText; 
    
    
    private void OnEnable()
    {
        transform.DOScale(0.15f, 0.25f).From(0).SetEase(Ease.OutBack);
        
        var currentLevel = LevelManager.Instance.currentLevel;
        mainText.text = currentLevel switch
        {
            1 => "Move trees out of drought area",
            3 => "Get the garbage out of the water",
            _ => mainText.text
        };
    }

    public void Disable()
    {
        transform.DOScale(0, 0.25f).SetEase(Ease.InBack).OnComplete(() =>
        {
            gameObject.SetActive(false);
        });
    }
}
