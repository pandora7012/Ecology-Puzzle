﻿using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using Sirenix.OdinInspector;
using UnityEngine;

public class ObjectBase : MonoBehaviour
{
    [SerializeField] protected SpriteRenderer spriteRenderer;
    [ShowInInspector] public Vector2 PositionInGrid { get; set; }
    public bool firm;

    private void Awake()
    {
        Observer.ResetObjectBase += DisableObject;
    }

    private void OnDestroy()
    {
        Observer.ResetObjectBase -= DisableObject;
    }


    public virtual void Init(Vector2 position, Transform parent, Vector2 positionInGrid, int theme)
    {
        gameObject.SetActive(true);
        transform.SetParent(parent);
        transform.localPosition = position;
        PositionInGrid = positionInGrid;
        LevelManager.Instance.AddObjectToMap(this, (int)positionInGrid.x, (int)positionInGrid.y);
    }

    protected virtual void ResetObject()
    {
    }

    [Obsolete("MoveObject is awful, please use RotateMove instead")]
    public virtual void MoveObject(Vector3 targetPosition, float time, bool needPath)
    {
        if (!needPath)
        {
            transform.DOLocalMove(targetPosition, time);
            return;
        }

        var midPoint = (transform.position + targetPosition) / 2;
        if (transform.position.y > targetPosition.y)
            midPoint.x += 1;
        else
            midPoint.x -= 1;

        var waypoint = new[] { midPoint, targetPosition };
        transform.DOLocalPath(waypoint, time + time*0.25f, PathType.CatmullRom, PathMode.Sidescroller2D, 3, Color.cyan);
    }

    public virtual void RotateMove(Vector2 center, float time, float angle)
    {
        Vector2 currVector  = (Vector2) transform.position - center;
        float radius        = MathF.Sqrt(currVector.x * currVector.x + currVector.y * currVector.y);
        float currAngle     = MathF.Atan2(currVector.y, currVector.x);
        float targetAngle   = currAngle + angle * Mathf.Deg2Rad;

        DOTween.To(() => currAngle, x => currAngle = x, targetAngle, time).OnUpdate(() =>
          {
              currVector = new Vector2(radius * MathF.Cos(currAngle), radius * MathF.Sin(currAngle));
              transform.position = center + currVector;
          });

    }

    public virtual void ChangePositionInGrid(Vector2 gridPosition)
    {
        PositionInGrid = gridPosition;
        LevelManager.Instance.AddObjectToMap(this, (int)gridPosition.x, (int)gridPosition.y);
    }

    protected virtual void DisableObject()
    {
        if (!gameObject.activeSelf)
            return;
        transform.parent = null;
        gameObject.SetActive(false);
        PositionInGrid = new Vector2(-1, -1);
    }
    
    protected virtual void SetTheme(int theme){}
}