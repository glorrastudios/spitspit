using UnityEngine;
using System.Collections;

public class powerEffect : MonoBehaviour {

	// Use this for initialization
	public float time;
	public bool hasWaitTime;
    public int number;

    private GameObject player;
    private Vector3 distance;
    public GameObject bullets;

	public ParticleSystem gunParticles;

	void Start () {
        distance = new Vector3(1, 0, 0);
        player = GameObject.Find("player");
        if(number==2)
        {
            InvokeRepeating("generateBulltes", 0f, 0.5f);
        }
    }
	
	// Update is called once per frame
	void Update () {
		if (hasWaitTime)
		{
           Invoke("destroyGameobject", time);
           hasWaitTime = false;
		}
        if(number==2)
        {
            transform.position = player.transform.position - distance;
        }
	}

	void destroyGameobject()
	{
		Destroy (this.gameObject);
	}

    void generateBulltes()
    {
		gunParticles.Stop();
		float highPosition = transform.position.y+2f;
        Instantiate(bullets, new Vector3(transform.position.x,highPosition,0), transform.rotation);
		gunParticles.Play();
    } 

	void OnTriggerEnter2D(Collider2D other)
	{
		if (other.tag == "character") 
		{
			Destroy (other.gameObject);
		}
        if(other.tag=="spit")
        {
            Destroy(other.gameObject);
        }
	}
}
