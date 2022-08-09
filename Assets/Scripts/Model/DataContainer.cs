using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Sprite Data", menuName = "Data/SpriteData")]
public class DataContainer : ScriptableObject
{
    public Sprite[] normalSprite1;
    public Sprite[] normalSprite2;

    public Sprite DangerSprite; // 위험 스프라이트 

    public Sprite movingSprite1;
    public Sprite movingSprite2;

    public Sprite levelButtonOn;
    public Sprite levelButtonPassed;
}
