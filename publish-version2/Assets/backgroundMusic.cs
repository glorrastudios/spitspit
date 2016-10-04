using UnityEngine;
using System.Collections;

public class backgroundMusic : MonoBehaviour {

	// Use this for initialization
	private static backgroundMusic instance = null;
    public AudioSource backGroundsound;
    public static backgroundMusic Instance 
	{
		get { return instance; }
	}

	void Awake()
	{
		if (instance != null && instance != this) {
			Destroy(this.gameObject);
			return;
		} else {
			instance = this;
		}
		DontDestroyOnLoad(this.gameObject);
	}

	void Start ()
	{
        int audioIsOff = PlayerPrefs.GetInt("audioisoff");
        if (audioIsOff == 0)
        {
            // set audio ON
            backGroundsound.Play();
        }
        else
        {
            // set audio ON
            backGroundsound.Stop();
        }
    }
	
	// Update is called once per frame
	void Update () {
	
	}




}
