using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class character : MonoBehaviour {

	// Use this for initialization
	bool moving;
	public float goal;
	public float offset;
	public Sprite color;
	public Sprite gray;
	private Image spriteSheet;
	public int needStar;

	void Awake () {
		moving = true;
		spriteSheet = GetComponent<Image> ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public IEnumerator changeSize(int identity)
	{
		float accumulation = 0;
		float goalLocal = goal;
		float offsetLocal = offset;
		if(identity==1)
		{
			goalLocal = -goalLocal;
			offsetLocal = -offsetLocal;
		}

		while(moving)
		{
			yield return new WaitForSeconds(0.01f);
			accumulation += offsetLocal;
			if (identity == 0) { //bigger
				if(accumulation>goalLocal)
				{
					moving = false;
					break;
				}
			}
			else
			{
				if(accumulation<goalLocal)
				{
					moving = false;
					break;
				}

			}
			float sizeX = this.gameObject.GetComponent<RectTransform> ().localScale.x + offsetLocal;
			float sizeY= this.gameObject.GetComponent<RectTransform> ().localScale.y+ offsetLocal;
			this.gameObject.GetComponent<RectTransform> ().localScale = new Vector2 (sizeX,sizeY);


		}
		moving = true;
	}

	public void changeSprite(int index)
	{
		if (index == 0) 
		{  //change to gray
			spriteSheet.sprite=gray;
		}
		else 
		{
			spriteSheet.sprite=color;
		}
	}

	public void setSize()
	{
		float sizeX = this.gameObject.GetComponent<RectTransform> ().localScale.x + goal;
		float sizeY= this.gameObject.GetComponent<RectTransform> ().localScale.y+ goal;
		this.gameObject.GetComponent<RectTransform> ().localScale = new Vector2 (sizeX,sizeY);
	}
}
