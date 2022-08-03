using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class Tile : ObjectBase
{
    [SerializeField] private SpriteRenderer sprite;
    [SerializeField] private Color color1;
    [SerializeField] private Color color2;
    [SerializeField] private Color dangerColor;
    [SerializeField] private Color dangerColor2;

    [SerializeField] private Color idleColor;
    [SerializeField] private Color selectColor;


    public void Init(Vector2 position, Transform parent)
    {
        gameObject.SetActive(true);
        transform.SetParent(parent);
        transform.localPosition = position;
    }

    public void SetIsBackgroundColor(int color)
    {
        sprite.material.color = color == 1 ? color1 : color2; 
    }

    public void SetIsMovePlatformColor(Color color)
    {
        sprite.material.color = color; 
        
    }

    public void SetToDangerArea(int r)
    {
        if (r%2 == 0)
            sprite.material.color = dangerColor;
        else 
            sprite.material.color = dangerColor2;

    }

    public void OnChooseOnMovingPlatform()
    {
        sprite.material.DOColor( selectColor , LevelManager.Instance.animRuntime).From(idleColor).SetEase(Ease.OutCirc);
    }

}
