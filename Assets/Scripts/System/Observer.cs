using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Observer : Singleton<Observer>
{
    
    public delegate void GameEvent();
    public static GameEvent ResetTile;
    public static GameEvent ResetMovingPlatform;
    public static GameEvent ResetObjective;

}
