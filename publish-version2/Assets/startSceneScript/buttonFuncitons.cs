using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.SocialPlatforms;
using UnityEngine.SocialPlatforms.GameCenter;


public class buttonFuncitons : MonoBehaviour {

    // Use this for initialization
	public string LEADERBOARD_ID;
    public Text highScoreText;
	public Text starCount;
	public Canvas canvas;
	public Canvas settngCanvas;
	public Canvas MainCanvas;
	public string APP_ID_ITUNES_CONNECT;

	public GameObject soundButtonON;
	public GameObject soundButtonOFF;
	public GameObject effctButtonON;
	public GameObject effctButtonOFF;

	private int audioIsOff;
	private int effectisoff;
	private RectTransform trans;
	private float add;
	private float goal;


    private AudioSource buttonSounds;
	public AudioSource backGroundsound;
	public Button removeAdsButton;

	public Button infoButt;

    //public string INAPP_PURCHASE_REMOVE_ADS = " "; //fill in here

    //public AudioSource effectSound;


    void Start () {
		
		//Social.localUser.Authenticate (ProcessAuthentication);

        highScoreText.text= "Best:"+PlayerPrefs.GetInt("HighScore").ToString()+"s";
		PlayerPrefs.SetString ("leaderboardid", LEADERBOARD_ID);
		starCount.text = PlayerPrefs.GetInt ("StarCount").ToString ();
        buttonSounds =GetComponent< AudioSource > ();
        //sounds
        audioIsOff = PlayerPrefs.GetInt("audioisoff");
		if (audioIsOff == 0) {
			// set audio ON
			soundButtonOFF.SetActive(false);
			soundButtonON.SetActive(true);
			backGroundsound.Play ();
		} else {
			// set audio ON
			soundButtonOFF.SetActive(true);
			soundButtonON.SetActive(false);
			backGroundsound.Stop ();
		}

		effectisoff=PlayerPrefs.GetInt("effectisoff");
		if (effectisoff==0) {  //turn on
			effctButtonOFF.SetActive(false);
			effctButtonON.SetActive(true);
			//effectSound.Play ();
		}
		else 
		{
			effctButtonOFF.SetActive(true);
			effctButtonON.SetActive(false);
			//effectSound.Stop();
		}

		int runTimes = PlayerPrefs.GetInt ("adsTime");
		if (runTimes == -1) 
		{
			removeAdsButton.interactable = false;
		}

		AuthenticateToGameCenter();

    }
	
	// Update is called once per frame
	void Update () {

	}

    private void playsound()
    {
        int numer=PlayerPrefs.GetInt("effectisoff");
        if (numer == 0)
        {
            if (buttonSounds.isPlaying)
            {
                buttonSounds.Stop();
            }
            buttonSounds.Play();
        }
    }

    public void loadDifferentScene(int number)

	{
        playsound();
        SceneManager.LoadScene(number);
	}

	public void startGame()
	{
        Debug.Log("here!");
        playsound ();
		int number=PlayerPrefs.GetInt("firstTime");
		if (number == 0) {
			PlayerPrefs.SetInt ("firstTime", 1);
			SceneManager.LoadScene(2);
		}
		else 
		{
			SceneManager.LoadScene(1);
		}

	}
	public void setting()
	{
        playsound();
        canvas.gameObject.SetActive (true);
	}

	public void close()
	{
		playsound();
		canvas.gameObject.SetActive (false);
	}

	public void closeSettingsCanvas()
	{
		playsound();
		MainCanvas.gameObject.SetActive (true);
		settngCanvas.gameObject.SetActive (false);

	}

	public void openSettingsCanvas()
	{
		playsound();
		MainCanvas.gameObject.SetActive (false);
		settngCanvas.gameObject.SetActive (true);
	}

	public void RateApp()
	{
        playsound();
        Application.OpenURL("itms-apps://itunes.apple.com/app/id" + APP_ID_ITUNES_CONNECT);
		//debug.log("rate")
	}

	public void TurnSoundOn()
	{
		audioIsOff = PlayerPrefs.GetInt("audioisoff");
		PlayerPrefs.SetInt("audioisoff", 0);
		soundButtonOFF.SetActive(false);
		soundButtonON.SetActive(true);
		backGroundsound.Play ();
		Debug.Log ("sound on ");

	}

	public void TurnSoundOff()
	{
		audioIsOff = PlayerPrefs.GetInt("audioisoff");
		PlayerPrefs.SetInt("audioisoff", 1);
		soundButtonOFF.SetActive(true);
		soundButtonON.SetActive(false);
		backGroundsound.Stop ();
		Debug.Log ("sound  off"); 
	}

	public void TurnEffectOff()
	{
		effectisoff = PlayerPrefs.GetInt("effectisoff");
		PlayerPrefs.SetInt("effectisoff", 1);
		effctButtonOFF.SetActive(true);
		effctButtonON.SetActive(false);
		Debug.Log ("effect  off");
	}
	public void TurnEffectOn()
	{
		effectisoff = PlayerPrefs.GetInt("effectisoff");
		PlayerPrefs.SetInt("effectisoff", 0);
		effctButtonOFF.SetActive(false);
		effctButtonON.SetActive(true);
		Debug.Log ("effect  on");
	}
		

	/*public void PressedLeaderboard()
	{
        playsound();
        Debug.Log ("leaderboard");
		if (!Social.localUser.authenticated) {
			Social.localUser.Authenticate (ProcessAuthentication);
		}
		string leaderboardID = PlayerPrefs.GetString ("leaderboardid");
		GameCenterPlatform.ShowLeaderboardUI(leaderboardID, TimeScope.AllTime);
	}
 
	void ProcessAuthentication (bool success) {
   
		if (success) {
			//Debug.Log ("Authenticated, checking achievements");

			// Request loaded achievements, and register a callback for processing them
			//Social.LoadAchievements (ProcessLoadedAchievements);
		}
		else
			Debug.Log ("Failed to authenticate");
	}*/


	void AuthenticateToGameCenter()
	{

		Social.localUser.Authenticate(success =>
			{
				if (success)
				{
					Debug.Log("Authentication successful");
				}
				else
				{
					Debug.Log("Authentication failed");
				}
			});

	}
		

	public void ShowLeaderboard()
	{

		playsound();
		int score = PlayerPrefs.GetInt ("HighScore");
		OnPostScore (score);
		Social.ShowLeaderboardUI();

	}

	/*public void OnLogin(string id){
		AuthenticateToGameCenter();
	}*/
	/// <summary>
	/// Raises the show leaderboard event.
	/// </summary>
	/*public void OnShowLeaderboard(){
		ShowLeaderboard();
	}*/
	/// <summary>
	/// Raises the post score event.
	/// </summary>
	/// 
	/// 
	public void OnPostScore(int score){
		ReportScore(score,LEADERBOARD_ID);   //??????
	}

	public void ReportScore(long score, string leaderboardID)
	{

		//Debug.Log("Reporting score " + score + " on leaderboard " + leaderboardID);
		Social.ReportScore(score, leaderboardID, success =>
			{
				if (success)
				{
					Debug.Log("Reported score successfully");
				}
				else
				{
					Debug.Log("Failed to report score");
				}
				Debug.Log(success ? "Reported score successfully" : "Failed to report score"); Debug.Log("New Score:"+score);
			});

	}

	public void closeInfo()
	{
		infoButt.gameObject.SetActive (false);
	}
	public void openInfo()
	{
		infoButt.gameObject.SetActive (true);
	}
}
