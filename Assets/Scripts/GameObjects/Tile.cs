using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tile : MonoBehaviour
{
    [SerializeField] private SpriteRenderer sprite;
    [SerializeField] private Sprite color1;
    [SerializeField] private Sprite color2;

    public void SetSpriteColor(int color)
    {
        sprite.sprite = color == 1 ? color1 : color2; 
    }
}
