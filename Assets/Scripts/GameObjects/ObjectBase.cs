using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class ObjectBase : MonoBehaviour
{
    [SerializeField] protected SpriteRenderer spriteRenderer;
    [SerializeField] public Vector2 PositionInGrid { get; set; }
    public virtual void Init(Vector2 position, Transform parent, Vector2 positionInGrid)
    {
        gameObject.SetActive(true);
        transform.SetParent(parent);
        transform.localPosition = position;
        PositionInGrid = positionInGrid;
        LevelManager.Instance.AddObjectToMap(this, (int) positionInGrid.x , (int) positionInGrid.y);
    }

    protected virtual void ResetObject()
    {

    }

    public virtual void MoveObject(Vector2 targetPosition, float time)
    {
        transform.DOLocalMove(targetPosition, time);
        //Debug.LogWarning(targetPosition);
    }

    public virtual void ChangePositionInGrid(Vector2 cp)
    {
        Debug.Log(PositionInGrid +"->" + cp);
      //  LevelManager.Instance.AddObjectToMap(null, (int) PositionInGrid.x , (int) PositionInGrid.y);
        PositionInGrid = cp;
        LevelManager.Instance.AddObjectToMap(this, (int) cp.x , (int) cp.y);
    }
}

