using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class changSprite : MonoBehaviour {

	// Use this for initialization
	public List<Sprite> SpriteList;
	//private Sprite[] SpriteList;

	private SpriteRenderer spriteSheet;
	private int index;
	private bool isGetGoal;

	void Start () {
		
		//SpriteList = Resources.LoadAll <Sprite>("backgroundScenes");

		spriteSheet=this.GetComponent<SpriteRenderer> ();
		index = 0;
		StartCoroutine (appearOrDisappear (1,0,-0.1f,30));

	}
	
	// Update is called once per frame
	void Update () {
		
	
	}


	IEnumerator appearOrDisappear(float start, float goal,float dis,float waitTime)
	{
        //change alpha
        Debug.Log(index);
		spriteSheet.sprite = SpriteList[index];
		Color tempColor = spriteSheet.color;
		spriteSheet.color =new Color(tempColor.r,tempColor.g,tempColor.b,start);


		yield return new WaitForSeconds(waitTime);
		float f = start;
		while (!isGetGoal) {
			f += dis;
			if (start == 1) 
			{
				if (f <= goal) 
				{
					isGetGoal = true;
					break;
				}
			}
			if (start == 0) 
			{
				if (f >= goal) 
				{
					isGetGoal = true;
					break;
				}

			}
			Color temp = spriteSheet.color;
			spriteSheet.color =new Color(temp.r,temp.g,temp.b,f);
			yield return new WaitForSeconds(0.1f);

		}

        if(start==1)
        {
            if (index < SpriteList.Count - 1)
            {
                index++;
            }
            else
            {
                index = 0;
            }
        }
		isGetGoal = false;

		//call next 
		if (start == 0) {
			StartCoroutine (appearOrDisappear (1,0,-0.1f,30));
		}
		else
		{
			StartCoroutine (appearOrDisappear (0,1,0.1f,30));
		}


	}


}
