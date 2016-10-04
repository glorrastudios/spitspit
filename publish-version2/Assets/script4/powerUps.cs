using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class powerUps : MonoBehaviour {

	// Use this for initialization
	public Text text;
	private int hitNumber;
	private tiles tile;
	public int number;  //own function different
	public GameObject gameObj;
    private bool oneTime;
    private GameObject player;

    void Start () {
		//CanvasRect=canvas.GetComponent<RectTransform>();
		//camera = GetComponent<Camera> ();
		hitNumber = Random.Range (10,15);
		tile = transform.parent.GetComponent<tiles> ();
		text.text = hitNumber.ToString();
        oneTime = true;
        player = GameObject.Find("player");

    }
	
	// Update is called once per frame
	void Update () {
		
	
	}
		
	void OnTriggerEnter2D(Collider2D other)
	{
		if(hitNumber<=0)
		{
			//function
			if (oneTime)
			{
                oneTime = false;
                Vector3 generatingPosition=transform.position;
                if (number==2)
                {
                    generatingPosition = player.transform.position - new Vector3(1, 0, 0);
                }
                GameObject powers = Instantiate(gameObj, generatingPosition, transform.rotation) as GameObject;
                powers.transform.parent =this.transform.parent;
                tile.nextPower = Random.Range (5f,8f);
				powers.GetComponent<powerEffect> ().time = tile.nextPower;
				powers.GetComponent<powerEffect> ().hasWaitTime = true;
				tile.alreadyDestoryed = true;
				Destroy (this.gameObject);
			}

		}

		if (hitNumber > 0) {
			if (other.tag == "spit") {
				hitNumber--;
				text.text = hitNumber.ToString ();
				Destroy (other.gameObject);
			}
		}
	}
}
