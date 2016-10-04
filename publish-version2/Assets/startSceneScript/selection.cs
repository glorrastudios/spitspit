using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class selection : MonoBehaviour {
	
	public List<GameObject> characters;
	public int main;
	private bool moving;
	public bool hasPress;
	public Button selectButton;
	private int chosenIndex;
	public Transform trans;
	public Text starText;

	public Button starCostButton;
	public Button moneyCostButton;
	public Button selectedButton;

	public Text starCost;
	public Text priceText;
	// Use this for initialization
	private soomlascript soomla;
	public Button byeAds;
	public Button buyAllChar;

	public AudioClip ChangingCharacters;
	public AudioClip CharacterSelected;
	public AudioClip fiveThouandStarsSound;
	public AudioClip PurchaseSucceeded;
	public AudioClip ButtonSound;

	private AudioSource audioPlay;


	void Start () {
		main =0;
		moving = true;
		chosenIndex = PlayerPrefs.GetInt("choose");
		showAlreadyChosen ();
		starText.text = PlayerPrefs.GetInt ("StarCount").ToString ();
		soomla = GameObject.Find ("soomla").GetComponent<soomlascript>();
		audioPlay = GetComponent<AudioSource> ();
		//PlayerPrefs.SetInt("StarCount",0);
    }
	
	// Update is called once per frame
	void Update () {
	
	}

	public void RemoveAds()
	{
		playSound (ButtonSound);
		soomla.RemoveAds ();
	}

	public void BuyThousandStars()
	{
		playSound (ButtonSound);
		soomla.BuyThousandStars();
	}

	public void BuyUnlockAllChars()
	{
		playSound (ButtonSound);
		soomla.BuyUnlockAllChars();
	}

	public void BuyOneChar()
	{
		playSound (ButtonSound);
		soomla.BuyOneChar();
	}

	private void playSound(AudioClip SoundClip)
	{
		int sound=PlayerPrefs.GetInt ("effectisoff");
		if (sound == 0) 
		{
			audioPlay.clip = SoundClip;
			if (audioPlay.isPlaying)
			{
				audioPlay.Stop();
			}
			audioPlay.Play();
		}
	}

	public void turnLeft()
	{
		if (main!=characters.Count-1) 
		{
			playSound (ChangingCharacters);
			StartCoroutine (changePoisition (-400,-80,0));
		}	
	}
	public void trunRight()
	{
		if(main != 0)
		{
			playSound (ChangingCharacters);
			StartCoroutine(changePoisition (400,80,1));
		}
	}

	public void removeAds()
	{
		PlayerPrefs.SetInt ("adsTime",-1);
		byeAds.gameObject.SetActive (false);
	}

	public void unLockAllChars()
	{
		PlayerPrefs.SetInt ("unlockAllChars",1);
		buyAllChar.gameObject.SetActive (false);
	}

	public void useMoneyBuyStars()
	{
		playSound(fiveThouandStarsSound);
		int starCount=PlayerPrefs.GetInt ("StarCount")+3000;  //adding stars wrong
		PlayerPrefs.SetInt ("StarCount", starCount);
		starText.text = PlayerPrefs.GetInt ("StarCount").ToString();
	}

	public void useMoneyBuyOneChar()
	{
		switch (main)
		{
		case 1:
			PlayerPrefs.SetInt("one",1);
			break;
		case 2:
			PlayerPrefs.SetInt("two",1);
			break;
		case 3:
			PlayerPrefs.SetInt("three",1);
			break;
		case 4:
			PlayerPrefs.SetInt("four",1);
			break;
		case 5:
			PlayerPrefs.SetInt("five",1);
			break;
		case 6:
			PlayerPrefs.SetInt("six",1);
			break;
		default:
			break;
		}
		starCostButton.gameObject.SetActive(false);
		moneyCostButton.gameObject.SetActive(false);
		selectButton.gameObject.SetActive(true);
	}

	IEnumerator changePoisition(float goal, float offset,int identity)
	{
		if (!hasPress) {
			hasPress = true;
			float accmulation = 0;
			//shirnk
			StartCoroutine (characters [main].GetComponent<character> ().changeSize (1));
			while (moving) {
				accmulation += offset;
				if (identity == 0) { //left
					if (accmulation < goal) {
						moving = false;
						break;
					}
				} else {
					if (accmulation > goal) {
						moving = false;
						break;
					}

				}
					
				float newXpositon = trans.localPosition.x + offset;
				trans.localPosition=new Vector3 (newXpositon, trans.localPosition.y, 0);
				yield return new WaitForSeconds (0.1f);

			}
			moving = true;
			//enlarge
			if (identity == 0) { //left
				main++;

			} else {
				main--;
			}
			StartCoroutine (characters [main].GetComponent<character> ().changeSize (0));
			showButton (main);
			StartCoroutine (waitAndRecover());
		}
	}

	IEnumerator waitAndRecover()
	{
		yield return new WaitForSeconds (0.1f);
		hasPress = false;
	}

	public void select()
	{
		//changesprite
		characters[main].GetComponent<character>().changeSprite(1);
		//previous select change back color
		characters[chosenIndex].GetComponent<character>().changeSprite(0);
		//tell game the player is who
		chosenIndex=main;
		PlayerPrefs.SetInt("choose",chosenIndex);
		//disable button
		selectButton.gameObject.SetActive(false);
        selectedButton.gameObject.SetActive(true);
		playSound (CharacterSelected);
	}


	void showButton(int index)   //each character shows diffenrent button;
	{
		if (index != chosenIndex) {
			//show select or price
			int status = 0;
			int unlockCharsNumber=PlayerPrefs.GetInt("unlockAllChars");
			if (unlockCharsNumber == 1) 
			{
				index = 0;
			}
		
			switch (index)
			{
				case 0:
				status = 1;
				break;
				case 1:
				status = PlayerPrefs.GetInt ("one");
				break;
				case 2:
				status = PlayerPrefs.GetInt ("two");
				break;
				case 3:
				status = PlayerPrefs.GetInt ("three");
				break;
				case 4:
				status = PlayerPrefs.GetInt ("four");
				break;
				case 5:
				status = PlayerPrefs.GetInt ("five");
				break;
				case 6:
				status = PlayerPrefs.GetInt ("six");
				break;
				default:
				status=1;
				break;
			}

			if (status == 1) 
			{
				selectButton.gameObject.SetActive(true);
                starCostButton.gameObject.SetActive(false);
                moneyCostButton.gameObject.SetActive(false);
            } 
			else 
			{
				starCost.text = characters [index].GetComponent<character>().needStar.ToString ();
                int currentStar = PlayerPrefs.GetInt("StarCount");
                if(currentStar- characters[index].GetComponent<character>().needStar<0)
                {
                    starCostButton.interactable = false;
                }
                else
                {
                    starCostButton.interactable = true;
                }
                selectButton.gameObject.SetActive(false);
                starCostButton.gameObject.SetActive(true);
				moneyCostButton.gameObject.SetActive(true);
			}
			selectedButton.gameObject.SetActive (false);

		}
		else
		{
			//do not show select or price
			selectedButton.gameObject.SetActive (true);
			selectButton.gameObject.SetActive(false);
			starCostButton.gameObject.SetActive(false);
			moneyCostButton.gameObject.SetActive(false);

		}
	}
	void showAlreadyChosen()
	{
		//sprite color
		characters[chosenIndex].GetComponent<character>().changeSprite(1);
		//button
		showButton(chosenIndex);
		//position
		float newXpositon = trans.localPosition.x+chosenIndex*-400f;
		trans.localPosition = new Vector3 (newXpositon,trans.localPosition.y,0f);
		main = chosenIndex;
		//resize
		characters [main].GetComponent<character> ().setSize();
	}

	public void useStarToBuy()
    {
        int currentStar = PlayerPrefs.GetInt("StarCount");
        if(starCostButton.IsInteractable())
        {
			playSound (ButtonSound);
			int starCount = currentStar - characters[main].GetComponent<character>().needStar;
            PlayerPrefs.SetInt("StarCount", starCount);
            switch (main)
            {
                case 1:
                    PlayerPrefs.SetInt("one",1);
                    break;
                case 2:
                    PlayerPrefs.SetInt("two",1);
                    break;
                case 3:
                    PlayerPrefs.SetInt("three",1);
                    break;
                case 4:
                    PlayerPrefs.SetInt("four",1);
                    break;
                case 5:
                    PlayerPrefs.SetInt("five",1);
                    break;
                case 6:
                    PlayerPrefs.SetInt("six",1);
                    break;
                default:
                    break;
            }
            starText.text = PlayerPrefs.GetInt("StarCount").ToString();
            starCostButton.gameObject.SetActive(false);
            moneyCostButton.gameObject.SetActive(false);
            selectButton.gameObject.SetActive(true);
        }
    }

	void useMoneyToBuy()
	{
		switch (main)
		{
		case 1:
			PlayerPrefs.SetInt("one",1);
			break;
		case 2:
			PlayerPrefs.SetInt("two",1);
			break;
		case 3:
			PlayerPrefs.SetInt("three",1);
			break;
		case 4:
			PlayerPrefs.SetInt("four",1);
			break;
		case 5:
			PlayerPrefs.SetInt("five",1);
			break;
		case 6:
			PlayerPrefs.SetInt("six",1);
			break;
		default:
			break;
		}

		starCostButton.gameObject.SetActive(false);
		moneyCostButton.gameObject.SetActive(false);
		selectButton.gameObject.SetActive(true);

	}


} 






