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
    [SerializeField] private Color color; 
    private readonly List<Tile> _tileList = new List<Tile>(); // 타일 리스트 

    [FormerlySerializedAs("_boxCollider2D")] [SerializeField] private BoxCollider2D boxCollider2D;
    [SerializeField] private SpriteRenderer infoSpriteRenderer;


    [Header("Info Sprite")] [SerializeField]
    private Sprite _90right;
    [SerializeField] Sprite _90left;
    [SerializeField] Sprite _180;
    
    private int Size { get; set; }
    
    public void Init(int width, int angle, bool isLeft )
    {
        rotationAngle = angle;
        isLeftDirection = isLeft;
        isRightDirection = !isLeft;
        _tileList.Clear();

        infoSpriteRenderer.sprite = rotationAngle switch
        {
            90 when isRightDirection => _90right,
            90 when isLeftDirection => _90left,
            180 => _180,
            _ => infoSpriteRenderer.sprite
        };

        Size = width;
        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < width; j++)
            {
                var obj = PoolingSystem.Instance.GetTile();
                obj.Init(new Vector3(i - width / 2, j - width / 2), transform );
                obj.SetIsMovePlatformColor(color);
                boxCollider2D.size = new Vector2(width, width);
                _tileList.Add(obj);
            }
        }
    }
    

    public void RotateExecute()
    {
        foreach (var t in _tileList)
        {
            t.OnChooseOnMovingPlatform();
        }
        LevelManager.Instance.MoveObject( this.PositionInGrid , Size , rotationAngle, isRightDirection );
        LevelManager.Instance.undoSystem.Record(this);
    }
    
    public void UndoRotateExecute()
    {
        LevelManager.Instance.MoveObject( this.PositionInGrid , Size , rotationAngle, isLeftDirection );
    }


}