using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using Soomla.Store;


	
public class soomlascript : MonoBehaviour {

	// Use this for initialization
	private static soomlascript instance ;

	void Awake(){
		if(!instance){ 	//making sure we only initialize one instance.
				instance = this;
				GameObject.DontDestroyOnLoad(this.gameObject);
		} else {					//Destroying unused instances.
				GameObject.Destroy(this.gameObject);
			}
				
		}

	void Start () {
		StoreEvents.OnMarketItemsRefreshFailed += storeRefreshFailed;
		StoreEvents.OnMarketPurchase += onMarketPurchase;
		//StoreEvents.OnItemPurchased += onItemPurchased;
		//StoreEvents.OnRestoreTransactionsFinished += onRestoreTransactionsFinished;
		SoomlaStore.Initialize(new IAP());
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void RemoveAds()
	{
		Debug.Log("remove ads");
		//IAPHandler.errorMsg = "Waiting...Connecting to store.";

		//if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer)
		//{
		//if (!StoreInventory.NonConsumableItemExists(GameAssets.NO_ADS.ItemId)) {
		StoreInventory.BuyItem(IAP.NO_ADS.ItemId);

		//}else{
		//SoomlaHandler.errorMsg ="You have already \n bought that item.";
		//}
		//}
		//else
		//{
		//Testing on the computer e.g
		//SoomlaHandler.errorMsg ="Thanks for your purchase. \n It means a lot!";
		//}
	}

	public void BuyThousandStars()
	{
		StoreInventory.BuyItem(IAP.fiveThousandeStars.ItemId);
	}
	
	public void BuyUnlockAllChars()
	{
		StoreInventory.BuyItem(IAP.unlockAllchars.ItemId);
	}
	
	public void BuyOneChar()
	{
		StoreInventory.BuyItem(IAP.buyOneChar.ItemId);
	}
	


	// IAP
	public void onMarketPurchase(PurchasableVirtualItem pvi, string payload, Dictionary<string, string> extra) {
		selection selection = GameObject.Find ("selectionCanvas").GetComponent<selection>();
		if (pvi.ItemId == IAP.NO_ADS.ItemId) {
			selection.removeAds();
		}
		if (pvi.ItemId == IAP.fiveThousandeStars.ItemId) {
			selection.useMoneyBuyStars ();
		}
		if (pvi.ItemId == IAP.unlockAllchars.ItemId) {
			selection.unLockAllChars ();
		}
		if (pvi.ItemId == IAP.buyOneChar.ItemId) {
			selection.useMoneyBuyOneChar ();
		}

	}
	
	void storeRefreshFailed(string msg)
	{
		Debug.Log("store refresh failed: " + msg);
	}

	/*public void onItemPurchased(PurchasableVirtualItem pvi, string payload) {
		if (pvi.ItemId == GameAssets.NO_ADS.ItemId) {
			InvokeRepeating("HideAds", 0.1f, 1.0f);
		}
	}*/
		
	}
