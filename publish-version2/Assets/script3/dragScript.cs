using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class dragScript : MonoBehaviour {

	Vector3 dist;
	float posX;
	float posY;
	bool isDragging;
	int choosen;
	int lastTime;

	public LayerMask layer;

	public button3 buttons;

    private player4 player;
    private AudioSource shootingSource;

	public Transform trans;

	void Start () {
		isDragging = false;
        player = GetComponent<player4>();
        shootingSource = GetComponent<AudioSource>();
    }
	
	// Update is called once per frame
	void Update () {

        //detect which one is the right one!
		//text.text=Input.touchCount.ToString();
		if (lastTime != Input.touchCount && Input.touchCount > 0 && isDragging) {
			for (int i = 0; i < Input.touchCount; i++) {
				Touch mytouch = Input.GetTouch (i);
				Vector2 rayPos = new Vector2 (Camera.main.ScreenToWorldPoint (mytouch.position).x, Camera.main.ScreenToWorldPoint (mytouch.position).y);
				RaycastHit2D hit = Physics2D.Raycast (rayPos, Vector2.zero, 0f,layer);
				if (hit.collider != null && hit.collider.transform == this.transform) {
					//text.text = Input.touchCount.ToString();
					dist = Camera.main.WorldToScreenPoint(trans.transform.position);
					posX = mytouch.position.x - dist.x;
					isDragging=true;
					choosen = i;
					break;

				}
			}

			if (Input.GetTouch (choosen).phase == TouchPhase.Moved)
			{
				Vector3 curPos = new Vector3(Input.GetTouch (choosen).position.x - posX, dist.y, dist.z);
				Vector3 worldPos = Camera.main.ScreenToWorldPoint(curPos);
				if (worldPos.x  > player.leftBorder && worldPos.x  < player.rightBorder) {
					//text.text="dragging";
					trans.transform.position = worldPos;
				}
			}

			if (Input.GetTouch (choosen).phase == TouchPhase.Ended)
			{
				isDragging = false;
			}
				
		}
			
		if (lastTime == Input.touchCount && Input.touchCount > 0) {

			if (isDragging == true) {

				if (Input.GetTouch (choosen).phase == TouchPhase.Moved)
				{
					Vector3 curPos = new Vector3(Input.GetTouch (choosen).position.x - posX, dist.y, dist.z);
					Vector3 worldPos = Camera.main.ScreenToWorldPoint(curPos);
					if (worldPos.x  > player.leftBorder && worldPos.x  < player.rightBorder) {
						//text.text="dragging";
						trans.transform.position = worldPos;
					}
				}

				if (Input.GetTouch (choosen).phase == TouchPhase.Ended)
				{
					isDragging = false;
				}

			}
		}
		if (!isDragging) {
			for (int i = 0; i < Input.touchCount; i++) {
				Touch mytouch = Input.GetTouch (i);
				if (mytouch.phase == TouchPhase.Began) {
					Vector2 rayPos = new Vector2 (Camera.main.ScreenToWorldPoint (mytouch.position).x, Camera.main.ScreenToWorldPoint (mytouch.position).y);
					RaycastHit2D hit = Physics2D.Raycast (rayPos, Vector2.zero, 0f,layer);
					if (hit.collider != null && hit.collider.transform == this.transform) {
						//text.text = Input.touchCount.ToString();
						dist = Camera.main.WorldToScreenPoint(trans.transform.position);
						posX = mytouch.position.x - dist.x;
						isDragging=true;
						choosen = i;
						break;
					}

				}
			}
		}

		//shooting bullets
		if(isDragging&&Input.touchCount>lastTime&&Input.touchCount>1)
		{
            playsound();
            buttons.shoot ();
		}
		if(!isDragging&&Input.touchCount>lastTime)
		{
            playsound();
            buttons.shoot ();
		}


		lastTime = Input.touchCount;




        //keyboard
		/*
        if (!isDragging) {
	
			if (Input.GetMouseButtonDown (0)) {
				//detect and use position
				Vector2 rayPos = new Vector2 (Camera.main.ScreenToWorldPoint (Input.mousePosition).x, Camera.main.ScreenToWorldPoint (Input.mousePosition).y);
				RaycastHit2D hit = Physics2D.Raycast (rayPos, Vector2.zero, 0f,layer);
				//Ray ray = Camera.main.ScreenPointToRay(mytouch.position);
				//RaycastHit2D hit = Physics2D.GetRayIntersection(ray,Mathf.Infinity);
				if (hit.collider != null && hit.collider.transform == this.transform) {
					//return hit.transform.gameObject;
					dist = Camera.main.WorldToScreenPoint (trans.transform.position);
					posX = Input.mousePosition.x - dist.x;
					isDragging = true;
				}

			}
		}
		if (isDragging) {
			if (Input.GetMouseButton (0) ) {
				Vector3 curPos = new Vector3 (Input.mousePosition.x - posX, dist.y, dist.z);
				Vector3 worldPos = Camera.main.ScreenToWorldPoint (curPos);
				trans.transform.position = worldPos;
			}

			if (Input.GetMouseButtonUp (0)) {
				isDragging = false;
			}
		}*/




		//key move

        float translation = Input.GetAxis("Horizontal")*0.2f;
        if(transform.position.x+translation >player.leftBorder&& translation+transform.position.x < player.rightBorder)
        {
            transform.Translate(translation, 0, 0);
        }
  
        //Debug.Log(translation);


    }

    private void playsound()
    {
        int numer = 1;
        numer = PlayerPrefs.GetInt("effectisoff");
        if (numer == 0)
        {
            if (shootingSource.isPlaying)
            {
                shootingSource.Stop();
            }
            shootingSource.Play();
        }
    }
}