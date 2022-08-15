using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Sprite Data", menuName = "Data/SpriteData")]
public class DataContainer : ScriptableObject
{
    
    [Header("Theme1")]
    public Sprite DangerSprite; // 위험 스프라이트 
    public Sprite movingSprite1;
    public Sprite movingSprite2;
    public Sprite bg1;
    public Sprite levelButtonOn;
    public Sprite levelButtonPassed;



    [Header("Theme2")] // 일반 스프라이트
    public Sprite dangerSprite2;
    public Sprite movingSprite3;
    public Sprite movingSprite4;
    public Sprite bg2; // 배경 스프라이트
    
}
