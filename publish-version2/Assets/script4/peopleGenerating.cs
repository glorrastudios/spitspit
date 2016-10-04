using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class peopleGenerating : MonoBehaviour {

	// Use this for initialization
	public List<GameObject> people;
	private List<GameObject> unlockPeople;
	private int number;
	public wholeMap wholeController;
	private int addNumber;
	//public IEnumerator coroutine;
	public bool newLevel;

	public int peopleNumberInLevel;
	public int levelAddPeople;
	public int standardPeopleNumber;

	public bool continueGenerate;
	public player4 player;
	private float nextShoot;
	public float waittigTime;
    public bool isStarting;
    public Text text;


	void Start () {
		unlockPeople = new List<GameObject> ();
		unlockPeople.Add (people [0]);
		number = 3;
		addNumber = 1;
		newLevel = true;
        isStarting = false;
        Invoke("startSetting", 2);
    }
	
	// Update is called once per frame
	void Update () {

        if (isStarting) {
        if (Time.time>nextShoot)
		{
			nextShoot = Time.time + waittigTime;
            Generate ();
		}

        if(wholeController.startNext==true)
        {
            if (wholeController.level % peopleNumberInLevel == 0)
            {
                //adding to list based on the level
                if (addNumber < people.Count)
                {
                    unlockPeople.Add(people[addNumber]);
                    addNumber++;
                }

            }
            wholeController.startNext = false;
        }
        }
    }

    //generation level-based on levels adding people-

    void startSetting()
    {
        isStarting = true;
		if(wholeController.numer2!=1)
		{
			Destroy(text.gameObject);
		}
    }

	void Generate()
	{
        //wholeController.coroutine = newPeople();
		generatePeople ();
		wholeController.coroutine = newPeople (2);
		StartCoroutine(wholeController.coroutine);
    }



	public void generatePeople()
	{
		int index = Random.Range(0, unlockPeople.Count);
		float positionY = Random.Range (player.leftBorder+0.5f,player.rightBorder-0.5f);
		Vector3 positionRandom = new Vector3(positionY,transform.position.y,transform.position.z);
		Instantiate(unlockPeople[index], positionRandom, transform.rotation);
        wholeController.peopleGenerated++;
		wholeController.peopleInscene++;
	}


	IEnumerator newPeople(int begin) {
		for (int i = begin; i < number; i++)
		{
			float waitTime =Random.Range(2f,5f);
			yield return new WaitForSeconds(waitTime);
			generatePeople ();
			//wait for next one or another one is touching the destination; 
		}
	}

}
