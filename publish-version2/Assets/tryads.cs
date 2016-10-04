using UnityEngine;
using System.Collections;
using ChartboostSDK;
using System.Collections.Generic;
using UnityEngine.UI;

public class tryads : MonoBehaviour {

	// Use this for initialization
	private List<string> delegateHistory;
	private bool showRewardedVideo = true;

	public Text starCount;
	public Text starCount2;

	#if UNITY_IPHONE
	private CBStatusBarBehavior statusBar = CBStatusBarBehavior.Ignore;
	#endif

	void OnEnable() {
		SetupDelegates();
	}

	void Start () {
		delegateHistory = new List<string>();

		Chartboost.setMediation (CBMediation.AdMob, "1.0");

		AddLog("Is Initialized: " + Chartboost.isInitialized());

		Chartboost.cacheRewardedVideo(CBLocation.Default);

	}
	void SetupDelegates()
	{
		// Listen to all impression-related events
		Chartboost.didInitialize += didInitialize;
		Chartboost.didFailToLoadInterstitial += didFailToLoadInterstitial;
		Chartboost.didDismissInterstitial += didDismissInterstitial;
		Chartboost.didCloseInterstitial += didCloseInterstitial;
		Chartboost.didClickInterstitial += didClickInterstitial;
		Chartboost.didCacheInterstitial += didCacheInterstitial;
		Chartboost.didDisplayInterstitial += didDisplayInterstitial;
		Chartboost.didFailToLoadMoreApps += didFailToLoadMoreApps;
		Chartboost.didDismissMoreApps += didDismissMoreApps;
		Chartboost.didCloseMoreApps += didCloseMoreApps;
		Chartboost.didClickMoreApps += didClickMoreApps;
		Chartboost.didCacheMoreApps += didCacheMoreApps;
		Chartboost.didDisplayMoreApps += didDisplayMoreApps;
		Chartboost.didFailToRecordClick += didFailToRecordClick;
		Chartboost.didFailToLoadRewardedVideo += didFailToLoadRewardedVideo;
		Chartboost.didDismissRewardedVideo += didDismissRewardedVideo;
		Chartboost.didCloseRewardedVideo += didCloseRewardedVideo;
		Chartboost.didClickRewardedVideo += didClickRewardedVideo;
		Chartboost.didCacheRewardedVideo += didCacheRewardedVideo;
		Chartboost.shouldDisplayRewardedVideo += shouldDisplayRewardedVideo;
		Chartboost.didCompleteRewardedVideo += didCompleteRewardedVideo;
		Chartboost.didDisplayRewardedVideo += didDisplayRewardedVideo;
		Chartboost.didCacheInPlay += didCacheInPlay;
		Chartboost.didFailToLoadInPlay += didFailToLoadInPlay;
		Chartboost.didPauseClickForConfirmation += didPauseClickForConfirmation;
		Chartboost.willDisplayVideo += willDisplayVideo;
		#if UNITY_IPHONE
		Chartboost.didCompleteAppStoreSheetFlow += didCompleteAppStoreSheetFlow;
		#endif
	}
	void AddLog(string text)
	{
		Debug.Log(text);
		delegateHistory.Insert(0, text + "\n");
		int count = delegateHistory.Count;
		if( count > 20 )
		{
			delegateHistory.RemoveRange(20, count-20);
		}
	}
	// Update is called once per frame
	void Update () {
	
	}

	public void cacheAds()
	{
		//Chartboost.cacheRewardedVideo(CBLocation.Default);
	}

	public void showAds()
	{
		Chartboost.showRewardedVideo(CBLocation.Default);
	}

	void didInitialize(bool status) {
		AddLog(string.Format("didInitialize: {0}", status));
	}

	void didFailToLoadInterstitial(CBLocation location, CBImpressionError error) {
		AddLog(string.Format("didFailToLoadInterstitial: {0} at location {1}", error, location));
	}

	void didDismissInterstitial(CBLocation location) {
		AddLog("didDismissInterstitial: " + location);
	}

	void didCloseInterstitial(CBLocation location) {
		AddLog("didCloseInterstitial: " + location);
	}

	void didClickInterstitial(CBLocation location) {
		AddLog("didClickInterstitial: " + location);
	}

	void didCacheInterstitial(CBLocation location) {
		AddLog("didCacheInterstitial: " + location);
	}
		

	void didDisplayInterstitial(CBLocation location){
		AddLog("didDisplayInterstitial: " + location);
	}

	void didFailToLoadMoreApps(CBLocation location, CBImpressionError error) {
		AddLog(string.Format("didFailToLoadMoreApps: {0} at location: {1}", error, location));
	}

	void didDismissMoreApps(CBLocation location) {
		AddLog(string.Format("didDismissMoreApps at location: {0}", location));
	}

	void didCloseMoreApps(CBLocation location) {
		AddLog(string.Format("didCloseMoreApps at location: {0}", location));
	}

	void didClickMoreApps(CBLocation location) {
		AddLog(string.Format("didClickMoreApps at location: {0}", location));
	}

	void didCacheMoreApps(CBLocation location) {
		AddLog(string.Format("didCacheMoreApps at location: {0}", location));
	}
		
	void didDisplayMoreApps(CBLocation location){
		AddLog("didDisplayMoreApps: " + location);
	}

	void didFailToRecordClick(CBLocation location, CBClickError error) {
		AddLog(string.Format("didFailToRecordClick: {0} at location: {1}", error, location));
	}

	void didFailToLoadRewardedVideo(CBLocation location, CBImpressionError error) {
		AddLog(string.Format("didFailToLoadRewardedVideo: {0} at location {1}", error, location));
	}

	void didDismissRewardedVideo(CBLocation location) {
		AddLog("didDismissRewardedVideo: " + location);
	}

	void didCloseRewardedVideo(CBLocation location) {
		AddLog("didCloseRewardedVideo: " + location);
	}

	void didClickRewardedVideo(CBLocation location) {
		AddLog("didClickRewardedVideo: " + location);
	}

	void didCacheRewardedVideo(CBLocation location) {
		AddLog("didCacheRewardedVideo: " + location);
	}

	bool shouldDisplayRewardedVideo(CBLocation location) {
		AddLog("shouldDisplayRewardedVideo @" + location + " : " + showRewardedVideo);
		return showRewardedVideo;
	}

	void didCompleteRewardedVideo(CBLocation location, int reward) {
		int coins=PlayerPrefs.GetInt ("StarCount")+999;
		PlayerPrefs.SetInt ("StarCount", coins);
		starCount.text = coins.ToString();
		starCount2.text = coins.ToString();
		AddLog(string.Format("didCompleteRewardedVideo: reward {0} at location {1}", reward, location));
	}

	void didDisplayRewardedVideo(CBLocation location){
		AddLog("didDisplayRewardedVideo: " + location);
	}

	void didCacheInPlay(CBLocation location) {
		AddLog("didCacheInPlay called: "+location);
	}

	void didFailToLoadInPlay(CBLocation location, CBImpressionError error) {
		AddLog(string.Format("didFailToLoadInPlay: {0} at location: {1}", error, location));
	}

	void didPauseClickForConfirmation() {
		#if UNITY_IPHONE
		AddLog("didPauseClickForConfirmation called");

		#endif
	}

	void willDisplayVideo(CBLocation location) {
		AddLog("willDisplayVideo: " + location);
	}

	#if UNITY_IPHONE
	void didCompleteAppStoreSheetFlow() {
		AddLog("didCompleteAppStoreSheetFlow");
	}
	#endif
}
