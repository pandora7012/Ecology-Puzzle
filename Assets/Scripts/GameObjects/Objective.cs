using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Objective : ObjectBase
{
    [SerializeField] private GameObject[] _treeObjects;

    public override void Init(Vector2 position, Transform parent, Vector2 positionInGrid)
    {
        base.Init(position, parent, positionInGrid);
        int u = Random.Range(0, _treeObjects.Length);
        for(int i = 0; i < _treeObjects.Length; i++)
        {
            _treeObjects[i].SetActive(i == u);
        }
    }
}
