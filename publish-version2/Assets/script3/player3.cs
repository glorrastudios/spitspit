using UnityEngine;
using UnityEngine.EventSystems;
using System.Collections;

public class player3 : MonoBehaviour{

	// Use this for initialization
	public float speed2;
	private Vector3 addOn;
	public float leftBorder, rightBorder, topBorder, bottomBorder; 
	public Vector3 velocityUp;
	public Vector3 velocityDown;
	public buttons but;





	//

	void Start()
	{
		float dist = (transform.position - Camera.main.transform.position).z;
		leftBorder = Camera.main.ViewportToWorldPoint(new Vector3(0, 0, dist)).x;
		rightBorder = Camera.main.ViewportToWorldPoint(new Vector3(1, 0, dist)).x;
		topBorder = Camera.main.ViewportToWorldPoint(new Vector3(0, 1, dist)).y;
		bottomBorder = Camera.main.ViewportToWorldPoint(new Vector3(0, 0, dist)).y;

	}

	// Update is called once per frame
	void Update()
	{
		


	}
		

}
