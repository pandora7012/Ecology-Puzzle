using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

public class MovingPlatform : ObjectBase
{
    [SerializeField] private int rotationAngle;
    [SerializeField] private bool isLeftDirection;
    [SerializeField] private bool isRightDirection;

    [FormerlySerializedAs("_boxCollider2D")] [SerializeField] private BoxCollider2D boxCollider2D;
    private int Size { get; set; }
    
    public void Init(int width, Color color, int angle, bool isLeft )
    {
        rotationAngle = angle;
        isLeftDirection = isLeft;
        isRightDirection = !isLeft;
        Size = width;
        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < width; j++)
            {
                
                var obj = PoolingSystem.Instance.GetTile();
                obj.Init(new Vector3(i - width / 2, j - width / 2), transform );
                obj.SetIsMovePlatformColor(color);
                boxCollider2D.size = new Vector2(width, width);
            }
        }
    }
    

    public void RotateExecute()
    {
        LevelManager.Instance.MoveObject( this.PositionInGrid , Size , rotationAngle, isRightDirection );
    }
}