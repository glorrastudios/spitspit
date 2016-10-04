#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Soomla.Store.StoreInfo
struct StoreInfo_t3860026085;
// System.Collections.Generic.Dictionary`2<System.String,Soomla.Store.VirtualItem>
struct Dictionary_2_t2477997028;
// System.Collections.Generic.Dictionary`2<System.String,Soomla.Store.PurchasableVirtualItem>
struct Dictionary_2_t4192868870;
// System.Collections.Generic.Dictionary`2<System.String,Soomla.Store.VirtualCategory>
struct Dictionary_2_t570736719;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Soomla.Store.UpgradeVG>>
struct Dictionary_2_t1490506220;
// System.Collections.Generic.List`1<Soomla.Store.VirtualCurrency>
struct List_1_t254888683;
// System.Collections.Generic.List`1<Soomla.Store.VirtualCurrencyPack>
struct List_1_t2640950052;
// System.Collections.Generic.List`1<Soomla.Store.VirtualGood>
struct List_1_t1637194007;
// System.Collections.Generic.List`1<Soomla.Store.VirtualCategory>
struct List_1_t4024965080;
// System.Func`2<Soomla.Store.UpgradeVG,System.Boolean>
struct Func_2_t4065757366;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Store.StoreInfo
struct  StoreInfo_t3860026085  : public Il2CppObject
{
public:

public:
};

struct StoreInfo_t3860026085_StaticFields
{
public:
	// Soomla.Store.StoreInfo Soomla.Store.StoreInfo::_instance
	StoreInfo_t3860026085 * ____instance_1;
	// System.Collections.Generic.Dictionary`2<System.String,Soomla.Store.VirtualItem> Soomla.Store.StoreInfo::VirtualItems
	Dictionary_2_t2477997028 * ___VirtualItems_2;
	// System.Collections.Generic.Dictionary`2<System.String,Soomla.Store.PurchasableVirtualItem> Soomla.Store.StoreInfo::PurchasableItems
	Dictionary_2_t4192868870 * ___PurchasableItems_3;
	// System.Collections.Generic.Dictionary`2<System.String,Soomla.Store.VirtualCategory> Soomla.Store.StoreInfo::GoodsCategories
	Dictionary_2_t570736719 * ___GoodsCategories_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Soomla.Store.UpgradeVG>> Soomla.Store.StoreInfo::GoodsUpgrades
	Dictionary_2_t1490506220 * ___GoodsUpgrades_5;
	// System.Collections.Generic.List`1<Soomla.Store.VirtualCurrency> Soomla.Store.StoreInfo::Currencies
	List_1_t254888683 * ___Currencies_6;
	// System.Collections.Generic.List`1<Soomla.Store.VirtualCurrencyPack> Soomla.Store.StoreInfo::CurrencyPacks
	List_1_t2640950052 * ___CurrencyPacks_7;
	// System.Collections.Generic.List`1<Soomla.Store.VirtualGood> Soomla.Store.StoreInfo::Goods
	List_1_t1637194007 * ___Goods_8;
	// System.Collections.Generic.List`1<Soomla.Store.VirtualCategory> Soomla.Store.StoreInfo::Categories
	List_1_t4024965080 * ___Categories_9;
	// System.Func`2<Soomla.Store.UpgradeVG,System.Boolean> Soomla.Store.StoreInfo::<>f__am$cache9
	Func_2_t4065757366 * ___U3CU3Ef__amU24cache9_10;
	// System.Func`2<Soomla.Store.UpgradeVG,System.Boolean> Soomla.Store.StoreInfo::<>f__am$cacheA
	Func_2_t4065757366 * ___U3CU3Ef__amU24cacheA_11;

public:
	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(StoreInfo_t3860026085_StaticFields, ____instance_1)); }
	inline StoreInfo_t3860026085 * get__instance_1() const { return ____instance_1; }
	inline StoreInfo_t3860026085 ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(StoreInfo_t3860026085 * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier(&____instance_1, value);
	}

	inline static int32_t get_offset_of_VirtualItems_2() { return static_cast<int32_t>(offsetof(StoreInfo_t3860026085_StaticFields, ___VirtualItems_2)); }
	inline Dictionary_2_t2477997028 * get_VirtualItems_2() const { return ___VirtualItems_2; }
	inline Dictionary_2_t2477997028 ** get_address_of_VirtualItems_2() { return &___VirtualItems_2; }
	inline void set_VirtualItems_2(Dictionary_2_t2477997028 * value)
	{
		___VirtualItems_2 = value;
		Il2CppCodeGenWriteBarrier(&___VirtualItems_2, value);
	}

	inline static int32_t get_offset_of_PurchasableItems_3() { return static_cast<int32_t>(offsetof(StoreInfo_t3860026085_StaticFields, ___PurchasableItems_3)); }
	inline Dictionary_2_t4192868870 * get_PurchasableItems_3() const { return ___PurchasableItems_3; }
	inline Dictionary_2_t4192868870 ** get_address_of_PurchasableItems_3() { return &___PurchasableItems_3; }
	inline void set_PurchasableItems_3(Dictionary_2_t4192868870 * value)
	{
		___PurchasableItems_3 = value;
		Il2CppCodeGenWriteBarrier(&___PurchasableItems_3, value);
	}

	inline static int32_t get_offset_of_GoodsCategories_4() { return static_cast<int32_t>(offsetof(StoreInfo_t3860026085_StaticFields, ___GoodsCategories_4)); }
	inline Dictionary_2_t570736719 * get_GoodsCategories_4() const { return ___GoodsCategories_4; }
	inline Dictionary_2_t570736719 ** get_address_of_GoodsCategories_4() { return &___GoodsCategories_4; }
	inline void set_GoodsCategories_4(Dictionary_2_t570736719 * value)
	{
		___GoodsCategories_4 = value;
		Il2CppCodeGenWriteBarrier(&___GoodsCategories_4, value);
	}

	inline static int32_t get_offset_of_GoodsUpgrades_5() { return static_cast<int32_t>(offsetof(StoreInfo_t3860026085_StaticFields, ___GoodsUpgrades_5)); }
	inline Dictionary_2_t1490506220 * get_GoodsUpgrades_5() const { return ___GoodsUpgrades_5; }
	inline Dictionary_2_t1490506220 ** get_address_of_GoodsUpgrades_5() { return &___GoodsUpgrades_5; }
	inline void set_GoodsUpgrades_5(Dictionary_2_t1490506220 * value)
	{
		___GoodsUpgrades_5 = value;
		Il2CppCodeGenWriteBarrier(&___GoodsUpgrades_5, value);
	}

	inline static int32_t get_offset_of_Currencies_6() { return static_cast<int32_t>(offsetof(StoreInfo_t3860026085_StaticFields, ___Currencies_6)); }
	inline List_1_t254888683 * get_Currencies_6() const { return ___Currencies_6; }
	inline List_1_t254888683 ** get_address_of_Currencies_6() { return &___Currencies_6; }
	inline void set_Currencies_6(List_1_t254888683 * value)
	{
		___Currencies_6 = value;
		Il2CppCodeGenWriteBarrier(&___Currencies_6, value);
	}

	inline static int32_t get_offset_of_CurrencyPacks_7() { return static_cast<int32_t>(offsetof(StoreInfo_t3860026085_StaticFields, ___CurrencyPacks_7)); }
	inline List_1_t2640950052 * get_CurrencyPacks_7() const { return ___CurrencyPacks_7; }
	inline List_1_t2640950052 ** get_address_of_CurrencyPacks_7() { return &___CurrencyPacks_7; }
	inline void set_CurrencyPacks_7(List_1_t2640950052 * value)
	{
		___CurrencyPacks_7 = value;
		Il2CppCodeGenWriteBarrier(&___CurrencyPacks_7, value);
	}

	inline static int32_t get_offset_of_Goods_8() { return static_cast<int32_t>(offsetof(StoreInfo_t3860026085_StaticFields, ___Goods_8)); }
	inline List_1_t1637194007 * get_Goods_8() const { return ___Goods_8; }
	inline List_1_t1637194007 ** get_address_of_Goods_8() { return &___Goods_8; }
	inline void set_Goods_8(List_1_t1637194007 * value)
	{
		___Goods_8 = value;
		Il2CppCodeGenWriteBarrier(&___Goods_8, value);
	}

	inline static int32_t get_offset_of_Categories_9() { return static_cast<int32_t>(offsetof(StoreInfo_t3860026085_StaticFields, ___Categories_9)); }
	inline List_1_t4024965080 * get_Categories_9() const { return ___Categories_9; }
	inline List_1_t4024965080 ** get_address_of_Categories_9() { return &___Categories_9; }
	inline void set_Categories_9(List_1_t4024965080 * value)
	{
		___Categories_9 = value;
		Il2CppCodeGenWriteBarrier(&___Categories_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_10() { return static_cast<int32_t>(offsetof(StoreInfo_t3860026085_StaticFields, ___U3CU3Ef__amU24cache9_10)); }
	inline Func_2_t4065757366 * get_U3CU3Ef__amU24cache9_10() const { return ___U3CU3Ef__amU24cache9_10; }
	inline Func_2_t4065757366 ** get_address_of_U3CU3Ef__amU24cache9_10() { return &___U3CU3Ef__amU24cache9_10; }
	inline void set_U3CU3Ef__amU24cache9_10(Func_2_t4065757366 * value)
	{
		___U3CU3Ef__amU24cache9_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache9_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheA_11() { return static_cast<int32_t>(offsetof(StoreInfo_t3860026085_StaticFields, ___U3CU3Ef__amU24cacheA_11)); }
	inline Func_2_t4065757366 * get_U3CU3Ef__amU24cacheA_11() const { return ___U3CU3Ef__amU24cacheA_11; }
	inline Func_2_t4065757366 ** get_address_of_U3CU3Ef__amU24cacheA_11() { return &___U3CU3Ef__amU24cacheA_11; }
	inline void set_U3CU3Ef__amU24cacheA_11(Func_2_t4065757366 * value)
	{
		___U3CU3Ef__amU24cacheA_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheA_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
