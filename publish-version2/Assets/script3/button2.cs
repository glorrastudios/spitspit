using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;
using System;

public class button2 : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    public float holdSeconds;
    private bool holddown;
    private float lastTime;
    public float speed;
    private Vector3 velocity;
    public Transform wind2;
    private float original;
    public float Highest;

    // Use this for initialization
    void Start()
    {
        lastTime = 0f;
        holddown = false;
        original = wind2.position.y;
        velocity = new Vector3(0, speed, 0);
    }

    // Update is called once per frame
    void Update()
    {
        if (holddown)
        {
            if (lastTime >= Highest)
            {
                lastTime = Highest;
               
            }
            else
            {
                wind2.position += velocity * Time.deltaTime;
                lastTime = wind2.transform.position.y;
                Debug.Log(lastTime);
            }
        }
        else
        {
            if (lastTime <= original)
            {
                lastTime = original;
            }
            else
            {
                wind2.position -= velocity * Time.deltaTime;
                lastTime = wind2.transform.position.y;
            }
        }

    }

    public void OnPointerDown(PointerEventData eventData)
    {
        StartCoroutine(startHoldTimer());
        holddown = true;
        Debug.Log("hold");
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        StopCoroutine(startHoldTimer());
        holddown = false;
        Debug.Log("leave!");
    }

    private IEnumerator startHoldTimer()
    {
        yield return new WaitForSeconds(0.2f);
    }

}
