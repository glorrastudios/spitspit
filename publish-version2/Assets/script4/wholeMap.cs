using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Collections.Generic;


public class wholeMap : MonoBehaviour {

	// Use this for initialization
	public int level;

	public peopleGenerating people;
	public int number;
	public int peopleInscene;

	public IEnumerator coroutine;
	public Canvas canvas;
	public bool startLevel;
    public bool startNextLevel;


    public float velocity;
    private float standard;
    private float time;
    private float goalTime;
    public bool firstTime;
    private bool destinationTime;
	public int peopleAlreadyAppear;

	public int lifeNumber;
    public int peopleGenerated;
    //public int peopleNumber;
    public bool startNext;

    public Text scoreText;

	public List<GameObject> hearts;
	public Text starText;
	public int startCounts;

	public Text result;
	public Text resultStarText;

    public float levelGeneratingTime;
	public bool nextLevelStart;

	private float timeShow;
	private int timeResult;

	public int numer2;
	public Text BestScore;

	public GameObject soundButtonON;
	public GameObject soundButtonOFF;
	public GameObject effctButtonON;
	public GameObject effctButtonOFF;
	private int audioIsOff;
	private int effectisoff;

	public Canvas soundCanvas;

    public AudioSource backgroundMusic;
	private AudioSource buttonSound;
	public ADManager ad;

	public AudioClip buttonClip;
    public AudioClip gameOverClip;
    public AudioClip onceClip;


    void Awake () {
		level = 1;
		number = 1;
		peopleInscene = 0;
		timeShow = 1f;
		timeResult = 0;
        startNextLevel = true;
		lifeNumber = 3;
        //highestScore.text = PlayerPrefs.GetInt("HighScore").ToString()+"S";
		buttonSound = GetComponent<AudioSource>();
        //Physics2D.IgnoreLayerCollision(10, 11, true);


    }

    void Start()
    {
		starText.text = PlayerPrefs.GetInt ("StarCount").ToString ();
		InvokeRepeating("nextLevel", levelGeneratingTime, levelGeneratingTime);

		//sounds
		if (numer2 == 0) {
			audioIsOff = PlayerPrefs.GetInt ("audioisoff");
			if (audioIsOff == 0) {
				// set audio ON
				soundButtonOFF.SetActive (false);
				soundButtonON.SetActive (true);
				backgroundMusic.Play ();
			} else {
				// set audio ON
				soundButtonOFF.SetActive (true);
				soundButtonON.SetActive (false);
				backgroundMusic.Stop ();
			}

			effectisoff = PlayerPrefs.GetInt ("effectisoff");
			if (effectisoff == 0) {  //turn on
				effctButtonOFF.SetActive (false);
				effctButtonON.SetActive (true);

			} else {
				effctButtonOFF.SetActive (true);
				effctButtonON.SetActive (false);

			}

			//playsound (backgroundMusic, 1);
		}

		if (numer2 == 1) {
			Invoke ("skipNextRound", 10f);
		}
    }

	// Update is called once per frame
	void Update () {
		if (numer2 == 0) {
			if (Time.time > timeShow) {
				timeShow = Time.time + 1f;
				timeResult++;
				scoreText.text = timeResult.ToString () + "S";
			}
			if (startLevel) {

				//show ads

				int runTimes = PlayerPrefs.GetInt ("adsTime");
				if (runTimes != -1) 
				{
					if (runTimes == 2) {
						if (ad.interstitial.IsLoaded ()) {
			                
							ad.interstitial.Show ();
						}
						PlayerPrefs.SetInt ("adsTime", 0);
					} 
					else 
					{
                        runTimes++;
                        buttonSound.clip = gameOverClip;
                        playsound(buttonSound, 0);
                        PlayerPrefs.SetInt ("adsTime", runTimes);
                    }

					//ad.interstitial.Show ();
						
				}

                canvas.gameObject.SetActive (true);
				result.text = timeResult.ToString () + "S";
				resultStarText.text = PlayerPrefs.GetInt("StarCount").ToString ();
				BestScore.text="Best"+PlayerPrefs.GetInt("HighScore").ToString ()+"s";
                startLevel = false;

			}
			if (lifeNumber == 0) {  //?????   
				Time.timeScale = 0f;
				startLevel = true;
				//update highest score
				if (timeResult > PlayerPrefs.GetInt ("HighScore")) {
					PlayerPrefs.SetInt ("HighScore", timeResult);
				}
				lifeNumber = -1;
			}
			//text.text = lifeNumber.ToString ();
		}
    }

    void nextLevel()
    {
        level++;
        startNext = true;
        //gameTiles.nextLevelStart = true;
		nextLevelStart = true;

    }

	public void TurnSoundOn()
	{
		audioIsOff = PlayerPrefs.GetInt("audioisoff");
		PlayerPrefs.SetInt("audioisoff", 0);
		soundButtonOFF.SetActive(false);
		soundButtonON.SetActive(true);
        backgroundMusic.Play();
        Debug.Log ("sound on ");

	}

	public void TurnSoundOff()
	{

		audioIsOff = PlayerPrefs.GetInt("audioisoff");
		PlayerPrefs.SetInt("audioisoff", 1);
		soundButtonOFF.SetActive(true);
		soundButtonON.SetActive(false);
        backgroundMusic.Stop();
        Debug.Log ("sound  off"); 
	}

	public void TurnEffectOff()
	{
        buttonSound.clip = buttonClip;
        buttonSound.clip = buttonClip;
        playsound (buttonSound, 0);
		effectisoff = PlayerPrefs.GetInt("effectisoff");
		PlayerPrefs.SetInt("effectisoff", 1);
		effctButtonOFF.SetActive(true);
		effctButtonON.SetActive(false);
		//effectSound.Stop();
		Debug.Log ("effect  off");
	}
	public void TurnEffectOn()
	{
        buttonSound.clip = buttonClip;
        buttonSound.clip = buttonClip;
        playsound (buttonSound, 0);
		effectisoff = PlayerPrefs.GetInt("effectisoff");
		PlayerPrefs.SetInt("effectisoff", 0);
		effctButtonOFF.SetActive(false);
		effctButtonON.SetActive(true);
		//effectSound.Play();
		Debug.Log ("effect  on");
	}

	public void close()
	{
        buttonSound.clip = buttonClip;
        playsound (buttonSound, 0);
		soundCanvas.gameObject.SetActive (false);
	}
	public void open()
	{
        buttonSound.clip = buttonClip;
        playsound (buttonSound, 0);
		soundCanvas.gameObject.SetActive (true);
	}

    public void playsound(AudioSource buttonSounds, int index)
    {
        int numer=1;
        if (index==1)
        {
            numer= PlayerPrefs.GetInt("audioisoff");
        }
        else
        {
            numer = PlayerPrefs.GetInt("effectisoff");
        }
        
        if (numer == 0)
        {
            if (buttonSounds.isPlaying)
            {
                buttonSounds.Stop();
            }
            buttonSounds.Play();
        }
    }

	void skipNextRound()
	{
		SceneManager.LoadScene(1);
	}	

    public void playOnceSound()
    {
        buttonSound.clip = onceClip;
        playsound(buttonSound,0);
    }

}
