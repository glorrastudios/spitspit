using UnityEngine;
using System.Collections;

public class moving : MonoBehaviour {

	// Use this for initialization
	public float speed;
	private Vector3 velocity;
	private player3 player;

	void Start () {
		velocity = new Vector3 (speed, 0, 0);
		player=GameObject.Find ("player").GetComponent<player3>();
	}
	
	// Update is called once per frame
	void Update () {
		transform.position += velocity * Time.deltaTime;
		if(transform.position.x<player.leftBorder||transform.position.x>player.rightBorder||transform.position.y<player.bottomBorder)
		{
			Destroy (this.gameObject);
		}
	}
}
