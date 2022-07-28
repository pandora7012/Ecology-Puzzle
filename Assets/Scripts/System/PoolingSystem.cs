﻿using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class PoolingSystem : Singleton<PoolingSystem>
{
    [Header("Objects")] [SerializeField] private Tile tile;
    [SerializeField] private MovingPlatform movingPlatformPrefabs;
    [SerializeField] private Objective objectivePrefabs;
    [SerializeField] private Barrier barrierPrefabs; 

    [Space(2)] [Header("Pool")] [SerializeField]
    private int poolSize = 150;
    [SerializeField] private int objectPoolSize;

    public List<Tile> tilePool = new List<Tile>();
    public List<MovingPlatform> movingPlatformPool = new List<MovingPlatform>();
    public List<Objective> objectivesPool = new List<Objective>();
    public List<Barrier> barrierPool = new List<Barrier>();

    public override void InitAwake()
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
            var obj = Instantiate(barrierPrefabs, transform); 
            obj.gameObject.SetActive(false);
            barrierPool.Add(obj);
        }
    }

    public Tile GetTile()
    {
        foreach (var tile1 in tilePool)
        {
            if (!tile1.gameObject.activeSelf)
            {
                return tile1;
            }
        }

        return null;
    }

    public MovingPlatform GetMovingPlatform()
    {
        return movingPlatformPool.FirstOrDefault(v => !v.gameObject.activeInHierarchy);
    }

    public Objective GetObjective()
    {
        return objectivesPool.FirstOrDefault(oj => !oj.gameObject.activeSelf);
    }

    public Barrier GetBarrier()
    {
        return barrierPool.FirstOrDefault(oj => !oj.gameObject.activeSelf);
    }
    



}