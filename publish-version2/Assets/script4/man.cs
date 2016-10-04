using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class man : MonoBehaviour {

    // Use this for initialization
	public Vector3 velocity;
    private player4 player;
	public bool stop;
	public Vector3 velocity2;
	private wholeMap controller;
	public float rate;
	private bool startChange;
	private float target;
	public float upVelocity;
	private float downVelocity;
	private float originalUpvelocity;
    private Vector3 lastPosition;
    private Vector3 direction;

    private Vector3 lastSpeed;
    private IEnumerator coroutine;
    private bool isCourtine;

	private int number;
    public GameObject explosion;

    private AudioSource manSound;
    public AudioClip coinSound;
    public AudioClip hitSound;

	private SpriteRenderer spriteColor;

    void Start () {
		stop = false;
        player = GameObject.Find("player").GetComponent<player4>();
		controller=GameObject.Find("wholeMap").GetComponent<wholeMap>();
		downVelocity = velocity.y;
		originalUpvelocity = upVelocity;
		number = controller.numer2;
        manSound = GetComponent<AudioSource>();
		StartCoroutine (flasher (35f,this.gameObject));
		spriteColor = GetComponent<SpriteRenderer> ();
    }


    void Update () {


        if (transform.position.y < player.bottomBorder)  //|| transform.position.x > player.rightBorder

        {
			//Time.timeScale = 0f;
			if (number == 0) {
				controller.lifeNumber--;
				Destroy (controller.hearts [controller.lifeNumber]);
				controller.peopleInscene--;
                controller.playOnceSound();
				Destroy (this.gameObject);
			}
        }

		if (startChange&&Time.time>target) 
		{
			startChange = false;
			if (velocity.y > 0) 
			{
				velocity = new Vector3 (velocity.x,downVelocity,velocity.z);   //???
				upVelocity = originalUpvelocity;
			}
		}

		Vector3 temp=transform.position+velocity * Time.deltaTime;
		if (temp.y < player.topBorder&&temp.x>player.leftBorder&&temp.x<player.rightBorder) {
			transform.position = temp;
		} else {
            if (temp.y >player.topBorder)
            {
                velocity = new Vector3(velocity.x, -upVelocity, velocity.z);
            }
            else if(temp.x < player.leftBorder)
            {
                velocity = new Vector3(upVelocity, velocity.y, velocity.z);
            }
            else
            {
                velocity = new Vector3(-upVelocity, velocity.y, velocity.z);
            }
			
		}
    }   
    
    
    IEnumerator removeVelocity(Vector3 vel)
    {
        isCourtine = true;
        yield return new WaitForSeconds(5f);
        isCourtine = false;
        velocity -= vel;
    }


    void OnTriggerEnter2D(Collider2D other)
	{
        
		if (other.tag == "obstacle") 
		{
			controller.lifeNumber--;
			Destroy(controller.hearts [controller.lifeNumber]);
			controller.peopleInscene--;
            //controller.peopleNumber++;
            Destroy(this.gameObject);
		}
		if (other.tag == "spit") 
		{
			if(!startChange )
			{
				velocity = new Vector3 (velocity.x,originalUpvelocity,velocity.z);

			}
			if (startChange) 
			{
				velocity = new Vector3 (velocity.x,upVelocity+1f,velocity.z);
			}
			startChange = true;
			target = rate + Time.time;
			Destroy (other.gameObject);
		}
		if (other.tag == "star") 
		{
			Destroy (other.gameObject);
			controller.startCounts++;
			int star = PlayerPrefs.GetInt ("StarCount")+1;
			PlayerPrefs.SetInt ("StarCount", star);
			controller.starText.text = star.ToString ();
			manSound.clip = coinSound;
            controller.playsound(manSound, 0);
        }
        if (other.tag == "elastic")
        {
            GameObject explode = Instantiate(explosion, other.transform.position, Quaternion.identity) as GameObject;
            StartCoroutine(waitAndDestory(0.6f, explode));
			manSound.clip = hitSound;
            controller.playsound(manSound, 0);
        }


    }

    IEnumerator waitAndDestory(float time, GameObject other)
    {
        yield return new WaitForSeconds(time);
    }

	IEnumerator flasher(float time,GameObject other) 
	{

		yield return new WaitForSeconds(time);
		for (int i = 0; i < 5; i++)
		{
			spriteColor.color = Color.red;
			yield return new WaitForSeconds(.2f);
			spriteColor.color = Color.white; 
			yield return new WaitForSeconds(.2f);
		}

		Destroy(other.gameObject);
	}

    void OnCollisionEnter2D(Collision2D coll)
    {
        if (coll.gameObject.tag == "elastic")
        {
            if (isCourtine)
            {
                StopCoroutine(coroutine);
                velocity -= lastSpeed;
            }
            Vector3 inDir = new Vector3(coll.contacts[0].point.x, coll.contacts[0].point.y, transform.position.z);
            Vector3 movingDirection = Vector3.Reflect((inDir - transform.position).normalized, coll.contacts[0].normal);
			float obstacleSpeed = coll.gameObject.GetComponent<items> ().speed;
			lastSpeed = movingDirection * obstacleSpeed;
            velocity += lastSpeed;//speed change
            coroutine = removeVelocity(lastSpeed);
            StartCoroutine(coroutine);
        }

    }

}
