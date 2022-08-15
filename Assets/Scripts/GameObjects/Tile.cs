using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using Random = UnityEngine.Random;

public class Tile : ObjectBase
{
    [SerializeField] private SpriteRenderer sprite;
    [SerializeField] private SpriteRenderer sprite2;

    protected override void DisableObject()
    {
        base.DisableObject();
        sprite.material.color = Color.white;
    }

    public void Init(Vector2 position, Transform parent)
    {
        gameObject.SetActive(true);
        transform.SetParent(parent);
        transform.localPosition = position;
        
    }

    public void SetIsBackgroundColor(int color, int theme)
    {
        sprite2.gameObject.SetActive(false);
        sprite.gameObject.SetActive(true);
        sprite.sprite = theme switch
        {
            1 => color == 1
                ? PoolingSystem.Instance.SpriteContainer.movingSprite1
                : PoolingSystem.Instance.SpriteContainer.movingSprite2,
            2 => color == 1
                ? PoolingSystem.Instance.SpriteContainer.movingSprite3
                : PoolingSystem.Instance.SpriteContainer.movingSprite4,
            _ => sprite.sprite
        };

        sprite.sortingOrder = (int)-transform.position.y;
    }


    public void SetToDangerArea(int theme)
    {
        sprite.gameObject.SetActive(true);
        var container = PoolingSystem.Instance.SpriteContainer; 
        switch (theme)
        {
            case 1:
                sprite.sprite = container.DangerSprite;
                sprite.gameObject.SetActive(true);
                sprite2.gameObject.SetActive(false);
                break;
            case 2:
                sprite.gameObject.SetActive(false);
                sprite2.gameObject.SetActive(true);
                break;
        }

    }
}