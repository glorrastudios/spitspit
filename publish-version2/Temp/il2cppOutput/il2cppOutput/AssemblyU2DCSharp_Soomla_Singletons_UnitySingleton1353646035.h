#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,Soomla.Singletons.UnitySingleton>
struct Dictionary_2_t3466193750;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<UnityEngine.MonoBehaviour,System.Action`1<Soomla.Singletons.UnitySingleton>>>
struct Dictionary_2_t3232370050;

#include "AssemblyU2DCSharp_Soomla_Singletons_BaseBehaviour2889047145.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Singletons.UnitySingleton
struct  UnitySingleton_t1353646035  : public BaseBehaviour_t2889047145
{
public:
	// System.Boolean Soomla.Singletons.UnitySingleton::<IsInstanceReady>k__BackingField
	bool ___U3CIsInstanceReadyU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CIsInstanceReadyU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnitySingleton_t1353646035, ___U3CIsInstanceReadyU3Ek__BackingField_5)); }
	inline bool get_U3CIsInstanceReadyU3Ek__BackingField_5() const { return ___U3CIsInstanceReadyU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsInstanceReadyU3Ek__BackingField_5() { return &___U3CIsInstanceReadyU3Ek__BackingField_5; }
	inline void set_U3CIsInstanceReadyU3Ek__BackingField_5(bool value)
	{
		___U3CIsInstanceReadyU3Ek__BackingField_5 = value;
	}
};

struct UnitySingleton_t1353646035_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,Soomla.Singletons.UnitySingleton> Soomla.Singletons.UnitySingleton::instances
	Dictionary_2_t3466193750 * ___instances_3;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<UnityEngine.MonoBehaviour,System.Action`1<Soomla.Singletons.UnitySingleton>>> Soomla.Singletons.UnitySingleton::instanceListeners
	Dictionary_2_t3232370050 * ___instanceListeners_4;

public:
	inline static int32_t get_offset_of_instances_3() { return static_cast<int32_t>(offsetof(UnitySingleton_t1353646035_StaticFields, ___instances_3)); }
	inline Dictionary_2_t3466193750 * get_instances_3() const { return ___instances_3; }
	inline Dictionary_2_t3466193750 ** get_address_of_instances_3() { return &___instances_3; }
	inline void set_instances_3(Dictionary_2_t3466193750 * value)
	{
		___instances_3 = value;
		Il2CppCodeGenWriteBarrier(&___instances_3, value);
	}

	inline static int32_t get_offset_of_instanceListeners_4() { return static_cast<int32_t>(offsetof(UnitySingleton_t1353646035_StaticFields, ___instanceListeners_4)); }
	inline Dictionary_2_t3232370050 * get_instanceListeners_4() const { return ___instanceListeners_4; }
	inline Dictionary_2_t3232370050 ** get_address_of_instanceListeners_4() { return &___instanceListeners_4; }
	inline void set_instanceListeners_4(Dictionary_2_t3232370050 * value)
	{
		___instanceListeners_4 = value;
		Il2CppCodeGenWriteBarrier(&___instanceListeners_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
