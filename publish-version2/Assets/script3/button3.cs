using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class button3 : MonoBehaviour {

    public GameObject wind;
    public Transform spot;
    public float waittigTime;
    private float nextShoot;
    public Animator ani;
	public Canvas canvas;

	public int level;
    ParticleSystem gunParticles;

    private AudioSource buttonSound;

    // Use this for initialization
    void Start () {
        gunParticles = GetComponent<ParticleSystem>();
        buttonSound = GetComponent<AudioSource>();
    }
	
	// Update is called once per frame
	void Update () {
 
    }

    public void shoot()
    {
        
        if (Time.time>nextShoot)
        {
            gunParticles.Stop();
            nextShoot = Time.time + waittigTime;
            Instantiate(wind, spot.transform.position, wind.transform.rotation);
            gunParticles.Play();
            ani.SetTrigger("blow");
        }
        
    }

    void playsound(AudioSource buttonSounds)
    {

        int numer = PlayerPrefs.GetInt("effectisoff");

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
		Time.timeScale = 1;
        playsound(buttonSound);
        SceneManager.LoadScene(number);
    }

	public void pause()
	{
		Time.timeScale = 0;
		canvas.gameObject.SetActive (true);
        playsound(buttonSound);
    }

	public void  resume()
	{
		canvas.gameObject.SetActive (false);
		Time.timeScale = 1;
        playsound(buttonSound);
    }

}
