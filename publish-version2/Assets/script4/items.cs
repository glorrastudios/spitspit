using UnityEngine;
using System.Collections;


public class items : MonoBehaviour {

	// Use this for initialization
	private bool allstart;
	private bool move=true;
	private tiles tile;
	private float distance;
	private float ownVelocity;
	private bool Up;
	private SpriteRenderer spriteColor;

	public int number;
	private wholeMap controller;

	public float speed;
    public bool border;


	void Start () {
		if (!border) 
		{
			if (number == 1) {
				tile = this.transform.parent.GetComponent<tiles> ();
			}
			if (number == 3) {
				tile = this.transform.parent.parent.GetComponent<tiles> ();
			}
			spriteColor = this.GetComponent<SpriteRenderer> ();
			controller = GameObject.Find ("wholeMap").GetComponent<wholeMap> ();
			StartCoroutine (appear ());
		}
    }
	
	// Update is called once per frame
	void Update () {
		if (!border) 
		{
			if (controller.nextLevelStart && move) {
				if (number == 1||number==3) {
					StartCoroutine (shakingAndDisappear ());
				}
				if (number == 2) {
					//stars
					StartCoroutine (disappear ());
				}
				move = false;
			}

			if (controller.nextLevelStart && number!=2) {
				if (Up) {
					transform.Translate (0, 0.1f, 0);
					Up = false;
				} else {
					transform.Translate (0, -0.1f, 0);
					Up = true;
				}
			}
		}

	}


    

     IEnumerator shakingAndDisappear()
	{
		//change alpha
		float f = 1f;
		while (f >= 0f) {
			f -= 0.3f;
			Color temp = spriteColor.color;
			spriteColor.color =new Color(temp.r,temp.g,temp.b,f);
			yield return new WaitForSeconds(0.1f);
		}
		tile.childNumber--;
		Debug.Log (this.name);
		Debug.Log (tile.childNumber);
		Destroy(this.gameObject);
	}


	IEnumerator disappear()
	{
		float f = 1f;
		while (f >= 0f) {
			f -= 0.3f;
			Color temp = spriteColor.color;
			spriteColor.color =new Color(temp.r,temp.g,temp.b,f);
			yield return new WaitForSeconds(0.1f);
		}
		Destroy(this.gameObject);
	}


	IEnumerator appear()
	{
		//change alpha
		float f = 0f;
		Color temp = spriteColor.color;
		spriteColor.color =new Color(temp.r,temp.g,temp.b,f);
		while (f <= 1f) {
			f += 0.1f;
			spriteColor.color =new Color(temp.r,temp.g,temp.b,f);
			yield return new WaitForSeconds(0.1f);
		}
	}




}
