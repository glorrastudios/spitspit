using UnityEngine;
using System.Collections;

public class obstacle : MonoBehaviour {

	// Use this for initialization
	public Vector3 velocity;
	public float speed;
	public int changeTime;
	public int number;
    public GameObject bullets;
    private bool back;
    private Animator ani;

	void Start () {
        InvokeRepeating("changeVelocity",0,changeTime);
		if(number==1) //blow 
		{
            InvokeRepeating("shooting",0,2);
		}
		if (number == 2) 
		{
			StartCoroutine (waitAndDestroy ());
		}
        if(number==3)
        {
            ani = GetComponent<Animator>();
            InvokeRepeating("strechOut", 0, 10);
        }
	}
	
	// Update is called once per frame
	void Update () {
		move ();
	}
    void strechOut()
    {
        float positionY = Random.Range(-5.3f,-8.5f);
        transform.position = new Vector3(transform.position.x, positionY, transform.position.y);
        ani.SetTrigger("stretch");
    }

	void move()
	{
		transform.position += velocity * Time.deltaTime*speed;
	}
	void changeVelocity()
	{
		speed = -speed;
	}
	/*void shooting()
	{
		GameObject nextItems=Instantiate(bullets,transform.position,transform.rotation) as GameObject;
		//nextItems.transform.parent = this.transform;
	}*/
	IEnumerator	waitAndDestroy()
	{
		yield return new WaitForSeconds(3);
		Destroy (this.gameObject);
	}





}
