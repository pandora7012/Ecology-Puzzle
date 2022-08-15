using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Firm : ObjectBase
{
    public override void Init(Vector2 position, Transform parent, Vector2 positionInGrid, int theme)
    {
        base.Init(position, parent, positionInGrid, theme);
        firm = true;
    }
}
