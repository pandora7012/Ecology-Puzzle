using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;
using DG.Tweening;

public class MovingPlatform : ObjectBase
{
    [SerializeField] private int rotationAngle;
    [SerializeField] private bool isLeftDirection;
    [SerializeField] private bool isRightDirection;
    private readonly List<Tile> _tileList = new List<Tile>(); // 타일 리스트 

    [FormerlySerializedAs("_boxCollider2D")] [SerializeField] private BoxCollider2D boxCollider2D;
    [SerializeField] private SpriteRenderer infoSpriteRenderer;
    [SerializeField] private SpriteRenderer movingSprite; 

    [Header("Info Sprite")] [SerializeField]
    private Sprite _90right;
    [SerializeField] private Sprite _90left;
    [SerializeField] private Sprite _180;
    
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
        movingSprite.size = new Vector2(width, width);
        boxCollider2D.size = new Vector2(width, width);

    }
    

    public void RotateExecute()
    {
        foreach (var t in _tileList)
        {
            t.OnChooseOnMovingPlatform();
        }
        if (LevelManager.Instance.IsMovable(PositionInGrid, Size, rotationAngle, isRightDirection))
        {
            transform.DORotate(transform.eulerAngles + new Vector3(0, 0, rotationAngle * (isLeftDirection ? 1 : -1)), 0.75f);
            LevelManager.Instance.MoveObject(PositionInGrid, transform.position, Size, rotationAngle, isRightDirection);
            LevelManager.Instance.undoSystem.Record(this);
        }
    }
    
    public void UndoRotateExecute()
    {
        transform.DORotate(transform.eulerAngles - new Vector3(0, 0, rotationAngle * (isLeftDirection ? 1 : -1)), 0.75f);
        LevelManager.Instance.MoveObject(PositionInGrid, transform.position, Size , rotationAngle, isLeftDirection );
    }


}