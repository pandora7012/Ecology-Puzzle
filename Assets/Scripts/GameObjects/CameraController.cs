using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{
    private Camera cam;

    void Start()
    {
        cam = GetComponent<Camera>();
        cam.transparencySortMode = TransparencySortMode.CustomAxis;
        cam.transparencySortAxis = new Vector3(0, 1, 0);
    }

    public void SetSizeAndPos(float size, Vector3 posOffset)
    {
        cam.orthographicSize = size;
        transform.position = posOffset;
    }
}