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
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;
// System.Collections.Generic.Dictionary`2<System.String,Soomla.Store.StoreInventory/LocalUpgrade>
struct Dictionary_2_t138990017;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t3667177573;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Store.StoreInventory
struct  StoreInventory_t1542337393  : public Il2CppObject
{
public:

public:
};

struct StoreInventory_t1542337393_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Soomla.Store.StoreInventory::localItemBalances
	Dictionary_2_t190145395 * ___localItemBalances_1;
	// System.Collections.Generic.Dictionary`2<System.String,Soomla.Store.StoreInventory/LocalUpgrade> Soomla.Store.StoreInventory::localUpgrades
	Dictionary_2_t138990017 * ___localUpgrades_2;
	// System.Collections.Generic.HashSet`1<System.String> Soomla.Store.StoreInventory::localEquippedGoods
	HashSet_1_t3667177573 * ___localEquippedGoods_3;

public:
	inline static int32_t get_offset_of_localItemBalances_1() { return static_cast<int32_t>(offsetof(StoreInventory_t1542337393_StaticFields, ___localItemBalances_1)); }
	inline Dictionary_2_t190145395 * get_localItemBalances_1() const { return ___localItemBalances_1; }
	inline Dictionary_2_t190145395 ** get_address_of_localItemBalances_1() { return &___localItemBalances_1; }
	inline void set_localItemBalances_1(Dictionary_2_t190145395 * value)
	{
		___localItemBalances_1 = value;
		Il2CppCodeGenWriteBarrier(&___localItemBalances_1, value);
	}

	inline static int32_t get_offset_of_localUpgrades_2() { return static_cast<int32_t>(offsetof(StoreInventory_t1542337393_StaticFields, ___localUpgrades_2)); }
	inline Dictionary_2_t138990017 * get_localUpgrades_2() const { return ___localUpgrades_2; }
	inline Dictionary_2_t138990017 ** get_address_of_localUpgrades_2() { return &___localUpgrades_2; }
	inline void set_localUpgrades_2(Dictionary_2_t138990017 * value)
	{
		___localUpgrades_2 = value;
		Il2CppCodeGenWriteBarrier(&___localUpgrades_2, value);
	}

	inline static int32_t get_offset_of_localEquippedGoods_3() { return static_cast<int32_t>(offsetof(StoreInventory_t1542337393_StaticFields, ___localEquippedGoods_3)); }
	inline HashSet_1_t3667177573 * get_localEquippedGoods_3() const { return ___localEquippedGoods_3; }
	inline HashSet_1_t3667177573 ** get_address_of_localEquippedGoods_3() { return &___localEquippedGoods_3; }
	inline void set_localEquippedGoods_3(HashSet_1_t3667177573 * value)
	{
		___localEquippedGoods_3 = value;
		Il2CppCodeGenWriteBarrier(&___localEquippedGoods_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
