using UnityEngine;
using System.Collections;

public class erase : MonoBehaviour {

	// Use this for initialization
	public int addNumber;
	void Start () {
		transform.parent.GetComponent<tiles> ().childNumber += addNumber;
	}
	
	// Update is called once per frame
	void Update () {
		if (transform.childCount == 0) 
		{
			Destroy (this.gameObject);
		}
	}
}
