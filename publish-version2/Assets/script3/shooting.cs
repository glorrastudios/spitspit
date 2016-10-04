using UnityEngine;
using System.Collections;

public class shooting : MonoBehaviour {

    // Use this for initialization
    public float speed;
    private Vector3 velocity;
    //private player3 player;
    private player4 player;
	public int number;


    void Start () {
		if (number == 0) 
		{
			velocity = new Vector3 (0, speed, 0);
		}
		else 
		{
			velocity = new Vector3 (speed, 0, 0);
		}
        player = GameObject.Find("player").GetComponent<player4>();
    }
	
	// Update is called once per frame
	void Update () {
        transform.position += velocity * Time.deltaTime;
        if (transform.position.x < player.leftBorder || transform.position.x > player.rightBorder || transform.position.y < player.bottomBorder|| transform.position.y > player.topBorder)
        {
            Destroy(this.gameObject);
        }
    }
}
