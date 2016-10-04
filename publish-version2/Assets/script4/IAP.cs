using UnityEngine;
using System.Collections;
using Soomla.Store;



public class IAP : IStoreAssets
{

    public int GetVersion()
    {
        return 5;
    }

    public VirtualCurrency[] GetCurrencies()
    {
        return new VirtualCurrency[] { };
    }


    public VirtualGood[] GetGoods()
    {
			return new VirtualGood[] { NO_ADS,fiveThousandeStars,unlockAllchars,buyOneChar};
    }

    public VirtualCurrencyPack[] GetCurrencyPacks()
    {
        return new VirtualCurrencyPack[] { };
    }

    public VirtualCategory[] GetCategories()
    {
        return new VirtualCategory[] { };
    }

		public const string INAPP_PURCHASE_REMOVE_ADS = "no_ads";   //???
		public const string INAPP_PURCHASE_Five_THOUSANDS_STARS = "5000Stars";
		public const string INAPP_PURCHASE_UNLOCK_ALL_CHARS = "unlockAllchars";
		public const string INAPP_PURCHASE_BUY_ONE_CHAR = "buyOneChar";

    /** LifeTimeVGs **/
    // Note: create non-consumable items using LifeTimeVG with PuchaseType of PurchaseWithMarket
    public static VirtualGood NO_ADS = new LifetimeVG(
		"buy ads",                                                       // name
		"remove ads",                                                 // description
		"noAds",                                                       // item id used by soomla
		new PurchaseWithMarket(INAPP_PURCHASE_REMOVE_ADS, 0.99)

	);  // the way this virtual good is purchased
	public static VirtualGood fiveThousandeStars = new SingleUseVG(
			"Stars Reward",                                       		// name
			"Get them to get benefit.", // description
			"fiveThousand_Stars",                                       		// item id
			new PurchaseWithMarket(INAPP_PURCHASE_Five_THOUSANDS_STARS, 0.99)
	);

	public static VirtualGood unlockAllchars = new SingleUseVG(
			"unlockAllchars",                                       		// name
			"unlock all chars!", // description
			"unlockAll_Chars!",                                       		// item id
			new PurchaseWithMarket(INAPP_PURCHASE_UNLOCK_ALL_CHARS, 2.99)
		);
	
		public static VirtualGood buyOneChar = new SingleUseVG(
			"buy one character",                                       		// name
			"buy one character", // description
			"buyone_character!",                                       		// item id
			new PurchaseWithMarket(INAPP_PURCHASE_BUY_ONE_CHAR, 0.99)
		);
}

