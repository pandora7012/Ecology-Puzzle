using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class PoolingSystem : Singleton<PoolingSystem>
{
    [Header("Objects")] [SerializeField] private Tile tile;
    [SerializeField] private MovingPlatform movingPlatformPrefabs;
    [SerializeField] private Objective objectivePrefabs;
    [SerializeField] private Firm firmPrefabs; 

    [Space(2)] [Header("Pool")] [SerializeField]
    private int poolSize = 150;
    [SerializeField] private int objectPoolSize;

    public List<Tile> tilePool = new List<Tile>();
    public List<MovingPlatform> movingPlatformPool = new List<MovingPlatform>();
    public List<Objective> objectivesPool = new List<Objective>();
    public List<Firm> barrierPool = new List<Firm>();

    public DataContainer SpriteContainer;
    public GameObject handTut;
    
    
    
    protected override void InitAwake()
    {
        base.InitAwake();
        InitPool();
    }

    private void InitPool()
    {
        for (var i = 0; i < poolSize; i++)
        {
            var obj = Instantiate(tile, transform);
            obj.gameObject.SetActive(false);
            tilePool.Add(obj);
        }

        for (var i = 0; i < objectPoolSize; i++)
        {
            var obj = Instantiate(movingPlatformPrefabs, transform);
            obj.gameObject.SetActive(false);
            movingPlatformPool.Add(obj);
        }

        for (int i = 0; i < objectPoolSize; i++)
        { 
            var obj = Instantiate(objectivePrefabs, transform);
            obj.gameObject.SetActive(false);
            objectivesPool.Add(obj);
        }

        for (int i = 0; i < objectPoolSize; i++)
        {
            var obj = Instantiate(firmPrefabs, transform); 
            obj.gameObject.SetActive(false);
            barrierPool.Add(obj);
        }
    }

    public Tile GetTile()
    {
        return tilePool.FirstOrDefault(tile1 => !tile1.gameObject.activeSelf);
    }

    public MovingPlatform GetMovingPlatform()
    {
        var obj = movingPlatformPool.FirstOrDefault(v => !v.gameObject.activeInHierarchy);
        obj.transform.rotation = Quaternion.identity;
        return obj;
    }

    public Objective GetObjective()
    {
        return objectivesPool.FirstOrDefault(oj => !oj.gameObject.activeSelf);
    }

    public Firm GetFirm()
    {
        return barrierPool.FirstOrDefault(oj => !oj.gameObject.activeSelf);
    }

}