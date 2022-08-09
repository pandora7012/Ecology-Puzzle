using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using Random = UnityEngine.Random;

public class Tile : ObjectBase
{
    [SerializeField] private SpriteRenderer sprite;
    [SerializeField] private SpriteRenderer movingObjSprite;
    [SerializeField] private Color dangerColor;


    protected override void DisableObject()
    {
        base.DisableObject();
        sprite.material.color = Color.white;
        sprite.material.color = Color.white;
    }

    public void Init(Vector2 position, Transform parent)
    {
        gameObject.SetActive(true);
        transform.SetParent(parent);
        transform.localPosition = position;
    }

    public void SetIsBackgroundColor(int color)
    {
        sprite.gameObject.SetActive(true);
        var len = PoolingSystem.Instance.SpriteContainer.normalSprite1.Length;
        sprite.sprite = color == 1
            ? PoolingSystem.Instance.SpriteContainer.movingSprite1
            : PoolingSystem.Instance.SpriteContainer.movingSprite2;
        movingObjSprite.gameObject.SetActive(false);
        sprite.sortingOrder = (int)-transform.position.y;
    }

    public void SetIsMovePlatformColor()
    {
        sprite.gameObject.SetActive(false);
        movingObjSprite.gameObject.SetActive(true);
    }
    

    public void SetToDangerArea()
    {
        sprite.gameObject.SetActive(true);
        movingObjSprite.gameObject.SetActive(false);
        sprite.sprite = PoolingSystem.Instance.SpriteContainer.DangerSprite; 
    }

    public void OnChooseOnMovingPlatform()
    {
        //sprite.material.DOColor( selectColor , LevelManager.Instance.animRuntime + 0.5f).From(idleColor).SetEase(Ease.OutCirc);
    }
}