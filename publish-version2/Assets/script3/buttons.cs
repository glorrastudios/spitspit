using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;
using System;

public class buttons : MonoBehaviour, IPointerDownHandler, IPointerUpHandler{
	
	public float holdSeconds;
	public bool holddown;
	public AreaEffector2D wind;
	public GameObject balls;
	public Transform trans;
    public float increaseSpeed;
    private float lastTime;
    public float HighestSpeed;
	public float speed;
	public Text text;

	// Use this for initialization
	void Start () {
        lastTime = 0f;
		holddown = false;
    }
	
	// Update is called once per frame
	void Update () {
		if (holddown) {
            if(lastTime>= HighestSpeed)
            {
                wind.GetComponent<AreaEffector2D>().forceMagnitude = HighestSpeed;
                lastTime = HighestSpeed;
            }
            else
            { 
				wind.GetComponent<AreaEffector2D> ().forceMagnitude = lastTime+ increaseSpeed*Time.deltaTime*speed;
            	lastTime = wind.GetComponent<AreaEffector2D>().forceMagnitude;
            }
			text.text="hold!"+lastTime.ToString();
        } 
		else 
		{
			if (lastTime <= 0) {
				wind.GetComponent<AreaEffector2D> ().forceMagnitude = 0f;
				lastTime = 0f;
			} 
			else 
			{
				wind.GetComponent<AreaEffector2D> ().forceMagnitude = lastTime-increaseSpeed*Time.deltaTime*speed;
				lastTime = wind.GetComponent<AreaEffector2D>().forceMagnitude;
			}
			text.text="leave!"+lastTime.ToString();
		}

	}

	public void OnPointerDown(PointerEventData eventData) {
		StartCoroutine(startHoldTimer());
		holddown = true;
		Debug.Log ("hold");
	}

	public void OnPointerUp(PointerEventData eventData) {
		StopCoroutine(startHoldTimer());
		holddown = false;
		Debug.Log ("leave!");
	}
		

	private IEnumerator startHoldTimer() {
		yield return new WaitForSeconds(0.2f);
	}

	public void preduceBalls()
	{
		Instantiate (balls, trans.position, trans.rotation);
	}

}
