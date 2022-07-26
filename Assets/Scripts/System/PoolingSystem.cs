using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class PoolingSystem : Singleton<PoolingSystem>
{
    [Header("Objects")] [SerializeField] private GameObject tile;


    [Space(2)] [Header("Pool")] [SerializeField]
    private int poolSize = 80;

    public List<Tile> tilePool = new List<Tile>();

    public override void InitAwake()
    {
        base.InitAwake();
        InitPool();
    }

    private void InitPool()
    {
        for (var i = 0; i < poolSize; i++)
        {
            var obj = Instantiate(tile, transform).GetComponent<Tile>();
            obj.gameObject.SetActive(false);
            tilePool.Add(obj);
        }
    }

    public Tile GetTile()
    {
        return tilePool.Where(obj => !obj.gameObject.activeInHierarchy).FirstOrDefault();
    }
}