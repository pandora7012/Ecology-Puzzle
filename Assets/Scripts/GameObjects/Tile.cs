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
        color.a = 0.4f;
        sprite.material.color = color; 
        
    }

    public void SetToDangerArea()
    {
        sprite.material.color = Color.red;
    }
    
}
