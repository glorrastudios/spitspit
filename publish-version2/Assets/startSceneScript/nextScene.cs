using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class nextScene : MonoBehaviour {

	// Use this for initialization
	void Start () {
		Invoke ("loadNextScene",2f);
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void loadNextScene()
	{
		SceneManager.LoadScene(1);
	}
}
