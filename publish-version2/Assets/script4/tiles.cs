using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class tiles : MonoBehaviour {
    public float leftside;
    public float rightside;
    public float topside;
    public float bottomside;
    public int number;    //group number
    public Transform trans;
    private player4 player;
    private float leftBorder, rightBorder, topBorder, bottomBorder;
	public bool move;
	public int length;

    public float standard;
	public int number2;

    public List<GameObject> items; //number in each group
    public int numberInGroup;
	public wholeMap controller;

	private List<GameObject> obstacles;
	public int addnewObstaclesLevel;
	private int addNumber;
	public int addnewOnstaclesnumber;
	public int addObstacleAmount;

	private Vector3 lastPosition;
	public float maxOffset;
	private Vector3 lastPosition2;
	public float maxXoffset;
	private float lastBorderP;

	public GameObject stars;
    public bool nextLevelStart;
    public int childNumber;

	public List<GameObject> borderObjects;
	private List<GameObject> borderObjs;

	public List<GameObject> powerUps;
	private List<GameObject> powers;
	private bool hasPowerups;
	private int addTimes;
	public int addLevel;
	private int alreadyAddIndex;
	public float holdTime;
	public bool alreadyDestoryed;
	public float nextPower;
    private bool isStarting;

	public GameObject balckHole;

    // Use this for initialization
    void Start () {
			player = GameObject.Find ("player").GetComponent<player4> ();
			leftBorder = player.leftBorder - leftside;
			rightBorder = player.rightBorder - rightside;
			topBorder = player.topBorder - topside;
			bottomBorder = player.bottomBorder - bottomside;
			move = true;
			standard = player.rightBorder - player.leftBorder;
			controller = GameObject.Find ("wholeMap").GetComponent<wholeMap> ();
			obstacles = new List<GameObject> ();
			borderObjs = new List<GameObject> ();
			powers = new List<GameObject> ();
			addTimes = 1;
			alreadyAddIndex = 1;

			if (number2 == -2) {
			//add border or obstacles
				lastPosition.y = topBorder;
				lastPosition2.x = leftBorder;
				lastBorderP= topBorder;
				for (int i = 0; i < 2; i++) {
					obstacles.Add (items [i]);
				}
				for (int i = 0; i < 2; i++) {
					borderObjs.Add (borderObjects[i]);
				}
			}
			addNumber = 1;

		if(number2==-3)
		{
			for(int i=0;i<2;i++){
				powers.Add (powerUps[i]);
			}
		}

        Invoke("startSetting", 2);
    }
	
	// Update is called once per frame
	void Update () {
        //if all destoryed move =true
        if(isStarting)
        { 
		if (number2 == -2) 
		{
			if (move) {

				generate ();
				generateBorder ();
				move = false;
			}
			if (childNumber == 0) {

				controller.nextLevelStart = false;
				move = true;
				lastPosition.y = topBorder;
				lastPosition2.x = leftBorder;
				lastBorderP= topBorder;
			}
		}
		if (number2 == -3&&!hasPowerups) 
		{
			float time = Random.Range (5f,10f);
			StartCoroutine (generatePowerUps(time));
		}

        }

    }

    void startSetting()
    {
        isStarting = true;

    }

    private void generateBorder()
	{
		while(lastBorderP>player.bottomBorder)
		{
			float randomOffset = Random.Range (2f, maxOffset);
			float safePosition = lastBorderP -randomOffset;  //chage here to control amount
			if(safePosition<bottomBorder)
			{
				return;
			}
			int left = Random.Range(0,2);
			if (left == 0) 
			{
				int index = Random.Range (0,borderObjs.Count);
				Vector3 borderPosition=new Vector3(player.leftBorder,safePosition, 0); 
				GameObject newItem=Instantiate(borderObjs[index], borderPosition, obstacles[index].transform.rotation) as GameObject;
				childNumber++;
				newItem.transform.parent = this.transform;

			}
			int right = Random.Range(0,2);
			if (right == 0) 
			{
				int index = Random.Range (0,borderObjs.Count);
				Vector3 borderPosition=new Vector3(player.rightBorder,safePosition, 0); 
				GameObject newItem=Instantiate(borderObjs[index], borderPosition, obstacles[index].transform.rotation) as GameObject;
				childNumber++;
				newItem.transform.parent = this.transform;
			}
			lastBorderP = safePosition;
		}
	}

    private void generate()
	{
		//each level how to select?? random for now 
		//how many obactacles each time?   how many levels add number??
		//how about positions, any limited?

		//generate black hole
		/*Vector3 randomPosition= new Vector3(Random.Range(leftBorder,rightBorder),Random.Range(topBorder,bottomBorder),0f);
		GameObject blackHole = Instantiate (balckHole, randomPosition, Quaternion.identity) as GameObject;
		StartCoroutine (DestoryBlakHole(blackHole));*/

		addIn();
		Vector3 position=transform.position;
		Vector3 StarPosition;
		int index;

		while (lastPosition.y>player.bottomBorder) //
		{

			float randomOffset = Random.Range (1f, maxOffset);
			//float randomdis=Random.Range (0f, 1f);
			float safePosition = lastPosition.y -randomOffset;
	        if(safePosition<bottomBorder)
            {
                return;
            }


			while(lastPosition2.x<rightBorder)
			{
				index = Random.Range (0, obstacles.Count);
				//calculate the x position;
				float xoffset = 0f;/*Random.Range (0, maxXoffset);*/

				float randomDis=Random.Range (1f, 3f);
				float safeXPosition = lastPosition2.x +xoffset+randomDis;
				if(safeXPosition>rightBorder)
				{
					break;
				}
				position=new Vector3(safeXPosition,safePosition, 0); 
				GameObject newItem=Instantiate(obstacles[index], position, obstacles[index].transform.rotation) as GameObject;
				childNumber++;
				Debug.Log ("number:"+childNumber);
				newItem.transform.parent = this.transform;

				StarPosition = position;

				int putStar = Random.Range(0,1);
				int direction=Random.Range(0,4);
				float offset = Random.Range (1f, 2f);

				if (putStar == 0) 
				{
					switch (direction)
					{
					case 0:
						StarPosition=new Vector3(position.x+offset, position.y, 0);
						break;
					case 1:
						StarPosition=new Vector3(position.x-offset, position.y, 0);
						break;
					case 2:
						StarPosition=new Vector3(position.x-offset, position.y+offset, 0);
						break;
					case 3:
						StarPosition=new Vector3(position.x-offset, position.y-offset, 0);
						break;
					default:
						break;
					}

					GameObject starCoin=Instantiate(stars, StarPosition, transform.rotation) as GameObject;
					starCoin.transform.parent = newItem.transform;
					//childNumber++;
				}

				lastPosition2 = position;
			}
			lastPosition = lastPosition2;
			lastPosition2.x = leftBorder;

		}

	}

	IEnumerator generatePowerUps(float time)
	{
		hasPowerups = true;
		addPower ();
		int index = Random.Range (0,powers.Count);
		Vector3 position = new Vector3 (Random.Range(leftBorder,rightBorder),Random.Range(topBorder,bottomBorder),0);
		GameObject powerUp=Instantiate (powers[index],position,powers[index].transform.rotation) as GameObject;
		powerUp.transform.parent = this.transform;
		yield return new WaitForSeconds (time);
		if (!alreadyDestoryed) 
		{
			Destroy (powerUp);
			nextPower = Random.Range (2f,5f);
		}
		yield return new WaitForSeconds (nextPower);
		hasPowerups = false;
		addTimes++;
	}

	private void addPower()
	{
		if(addTimes%addLevel==0&&powers.Count<powerUps.Count)
		{
			alreadyAddIndex++;
			powers.Add (powers[alreadyAddIndex]);
		}
	}

	private void addIn()
	{
		//how many levels add more things?
		//at each time add how many obstacles?
		if(controller.level % addnewObstaclesLevel== 0)
		{
			//adding to list based on the level
			for(int i=0;i<addnewOnstaclesnumber;i++){
			if (addNumber < items.Count)
			{
				obstacles.Add(items[addNumber]);
				addNumber++;
			}
			}
		}
	}

	IEnumerator DestoryBlakHole (GameObject gameobj)
	{
		yield return new WaitForSeconds(20f);
		Destroy(gameobj);
	}


}
