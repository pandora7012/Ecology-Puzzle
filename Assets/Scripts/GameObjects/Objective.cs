using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Objective : ObjectBase
{
    [SerializeField] private GameObject[] _treeObjects;
    [SerializeField] private GameObject[] _theme2Obj;
    
    
    public override void Init(Vector2 position, Transform parent, Vector2 positionInGrid, int theme)
    {
        base.Init(position, parent, positionInGrid, theme);
        firm = false;
        SetTheme(theme);
    }


    protected override void SetTheme(int theme)
    {
        base.SetTheme(theme);
        switch (theme)
        {
            case 1:
                var a = Random.Range(0, _treeObjects.Length);
                for (var i = 0; i < _treeObjects.Length; i++)
                    _treeObjects[i].SetActive(i == a);
                foreach (var v in _theme2Obj)
                    v.SetActive(false);
                break;
            case 2:
                var u = Random.Range(0, _theme2Obj.Length);
                foreach (var t in _treeObjects)
                    t.gameObject.SetActive(false);
                for (var v = 0; v < _theme2Obj.Length; v++)
                {
                     _theme2Obj[v].gameObject.SetActive(u == v);
          
                }
                   
                break;
                

        }
    }
}
