using UnityEngine;
using System.Collections;

public class layers : MonoBehaviour {

	// Use this for initialization
	public GameObject first;
	public Transform firstOne;
	private Transform parentTrans;
	void Start () {
		parentTrans = transform.parent.transform;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
    void OnTriggerExit2D(Collider2D other)
    {
		if (other.tag == "generate") 
		{
            GameObject item= Instantiate (first,firstOne.position,firstOne.rotation)as GameObject;
			item.transform.parent = parentTrans;

		}
		if (other.tag == "leftwall") 
		{
			Destroy (this.gameObject);
		}
	}
}
