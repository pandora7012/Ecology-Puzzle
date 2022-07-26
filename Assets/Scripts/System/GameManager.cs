using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : Singleton<GameManager>
{

    public string version; //version of the game
    public override void InitAwake()
    {
        Application.targetFrameRate = 60;
        version = Application.version;
    }
}
