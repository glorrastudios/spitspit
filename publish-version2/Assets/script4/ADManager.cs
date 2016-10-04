using UnityEngine;
using System.Collections;
using GoogleMobileAds;
using GoogleMobileAds.Api;
using System;
using ChartboostSDK;
using UnityEngine.UI;
using System.Collections.Generic;

public class ADManager : MonoBehaviour {

	public InterstitialAd interstitial;
	// Use this for initialization
	void Start () {
		RequestInterstitial ();
		// Listen to all impression-related events

	}



	// Update is called once per frame
	void Update () {
	
	}

	private void RequestInterstitial()
	{
		#if UNITY_ANDROID
		string adUnitId = "INSERT_ANDROID_INTERSTITIAL_AD_UNIT_ID_HERE";
		#elif UNITY_IPHONE
		string adUnitId = "ca-app-pub-9742218473743442/3962524816";     
		#else
		string adUnitId = "unexpected_platform";
		#endif
		// Initialize an InterstitialAd.
		interstitial = new InterstitialAd(adUnitId);
		// Create an empty ad request.
		AdRequest request = new AdRequest.Builder().Build();
		// Load the interstitial with the request.
		//interstitial.OnAdLoaded+=ShowInterstitial;
		interstitial.LoadAd(request);
	}
		



	void OnDestroy() {
		interstitial.Destroy();  //??
	}
	


}
