using UnityEngine;
using System.Collections;

public class destroy : MonoBehaviour {

	// Use this for initialization
	void Start () {
		Invoke ("destoryExplode",2);
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void destoryExplode()
	{
		Destroy (this.gameObject);
	}
}
