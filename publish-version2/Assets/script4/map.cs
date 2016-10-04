using UnityEngine;
using System.Collections;

public class map : MonoBehaviour {

	// Use this for initialization

	public bool move;
	private float lastTime;
	private player4 player;
	private float standard;
	public Vector3 velocity;
    public int number;
	private float ownVelocity;
	private float distance2;
	public int length;


	void Start () {
		player = GameObject.Find("player").GetComponent<player4>();
		standard = player.rightBorder - player.leftBorder;
        if(number==2)
        {
            standard -= 2f;
        }
        if (number == 3)
        {
            standard -= 4f;
        }
        lastTime = transform.position.x;
		distance2 = standard/ length;
		ownVelocity = distance2 / (standard / velocity.x);
	}

	// Update is called once per frame
	void Update () {
		
		if (move)
		{
			float distance = Mathf.Abs(transform.position.x - lastTime);
			if (distance > distance2)
			{
				move = false;
			}
			transform.position += new Vector3(ownVelocity,0,0) * Time.deltaTime;
		}
		else{
            if(number==2)
            {
                Vector3 speed = new Vector3(Random.Range(-0.5f, 0f), 0, 0);
                transform.position += speed * Time.deltaTime;
            }
		lastTime=transform.position.x;
            		}
	}
		
}
