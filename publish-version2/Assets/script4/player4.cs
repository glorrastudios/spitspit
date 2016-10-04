using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class player4 : MonoBehaviour {
    public float leftBorder, rightBorder, topBorder, bottomBorder;
    // Use this for initialization
	public List<GameObject> SpriteList;
	private SpriteRenderer spriteSheet;
	private int chosenIndex;
	private Animator ani;
	public Material material;

    private AudioSource shootingSource;
    public List<AudioClip> clips;

	public int number;

    void Awake()
    {
        float dist = (transform.position - Camera.main.transform.position).z;
        leftBorder = Camera.main.ViewportToWorldPoint(new Vector3(0, 0, dist)).x;
        rightBorder = Camera.main.ViewportToWorldPoint(new Vector3(1, 0, dist)).x;
        topBorder = Camera.main.ViewportToWorldPoint(new Vector3(0, 1, dist)).y;
        bottomBorder = Camera.main.ViewportToWorldPoint(new Vector3(0, 0, dist)).y;
    }
	void Start()
	{
		if (number == 0) {
		spriteSheet=this.GetComponent<SpriteRenderer> ();
		chosenIndex = PlayerPrefs.GetInt ("choose");
		ani=this.GetComponent<Animator> ();
        shootingSource = GetComponent<AudioSource>();
        initial ();
		}

	}
	// Update is called once per frame
	void Update () {
	
	}


	//initialize()
	void initial()
	{
		//chage sprite
		GameObject chosenObject=SpriteList[chosenIndex];
		spriteSheet.sprite=chosenObject.GetComponent<SpriteRenderer>().sprite;
		//change size
		transform.localScale=chosenObject.transform.localScale;
		//change position;
		transform.position=new Vector3(chosenObject.transform.position.x,chosenObject.transform.position.y,0f);
		//change animation controller
		switch (chosenIndex)
		{
		case 0:
			ani.runtimeAnimatorController = Resources.Load ("player")as RuntimeAnimatorController;
			material.mainTexture = Resources.Load ("drop-01")as Texture;
            shootingSource.clip = clips[0];
            break;
		case 1:
			ani.runtimeAnimatorController = Resources.Load ("duck1-01")as RuntimeAnimatorController;
			material.mainTexture = Resources.Load ("bubble-01")as Texture;  //texture
            shootingSource.clip = clips[1];
            break;
        case 2:
            ani.runtimeAnimatorController = Resources.Load("gorilla1-01") as RuntimeAnimatorController;
            material.mainTexture = Resources.Load("banana-01") as Texture;  //texture
            shootingSource.clip = clips[2];
            break;
		case 3:
			ani.runtimeAnimatorController = Resources.Load("Trex1-01") as RuntimeAnimatorController;
			material.mainTexture = Resources.Load("music-01") as Texture;  //texture
            shootingSource.clip = clips[3];
            break;	
		case 4:
			ani.runtimeAnimatorController = Resources.Load("yeti-01") as RuntimeAnimatorController;
			material.mainTexture = Resources.Load("snowBall-01") as Texture;  //texture
            shootingSource.clip = clips[4];
            break;

		case 5:
			ani.runtimeAnimatorController = Resources.Load("cow1-01") as RuntimeAnimatorController;
			material.mainTexture = Resources.Load("heart-01") as Texture;  //texture
            shootingSource.clip = clips[5];
            break;
		case 6:
			ani.runtimeAnimatorController = Resources.Load("deer1-01") as RuntimeAnimatorController;
			material.mainTexture = Resources.Load("leaf-01") as Texture;  //texture
            shootingSource.clip = clips[6];
            break;
        default:
	    Debug.Log ("out of the count");
	    break;

		}


	}
}
