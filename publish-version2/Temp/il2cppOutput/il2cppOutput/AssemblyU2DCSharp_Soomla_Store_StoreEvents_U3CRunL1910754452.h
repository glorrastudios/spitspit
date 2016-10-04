#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Soomla.Store.StoreEvents/RunLaterDelegate
struct RunLaterDelegate_t742861702;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Store.StoreEvents/<RunLaterPriv>c__Iterator3
struct  U3CRunLaterPrivU3Ec__Iterator3_t1910754452  : public Il2CppObject
{
public:
	// System.Single Soomla.Store.StoreEvents/<RunLaterPriv>c__Iterator3::delay
	float ___delay_0;
	// System.Single Soomla.Store.StoreEvents/<RunLaterPriv>c__Iterator3::<pauseEndTime>__0
	float ___U3CpauseEndTimeU3E__0_1;
	// Soomla.Store.StoreEvents/RunLaterDelegate Soomla.Store.StoreEvents/<RunLaterPriv>c__Iterator3::runLaterDelegate
	RunLaterDelegate_t742861702 * ___runLaterDelegate_2;
	// System.Int32 Soomla.Store.StoreEvents/<RunLaterPriv>c__Iterator3::$PC
	int32_t ___U24PC_3;
	// System.Object Soomla.Store.StoreEvents/<RunLaterPriv>c__Iterator3::$current
	Il2CppObject * ___U24current_4;
	// System.Single Soomla.Store.StoreEvents/<RunLaterPriv>c__Iterator3::<$>delay
	float ___U3CU24U3Edelay_5;
	// Soomla.Store.StoreEvents/RunLaterDelegate Soomla.Store.StoreEvents/<RunLaterPriv>c__Iterator3::<$>runLaterDelegate
	RunLaterDelegate_t742861702 * ___U3CU24U3ErunLaterDelegate_6;

public:
	inline static int32_t get_offset_of_delay_0() { return static_cast<int32_t>(offsetof(U3CRunLaterPrivU3Ec__Iterator3_t1910754452, ___delay_0)); }
	inline float get_delay_0() const { return ___delay_0; }
	inline float* get_address_of_delay_0() { return &___delay_0; }
	inline void set_delay_0(float value)
	{
		___delay_0 = value;
	}

	inline static int32_t get_offset_of_U3CpauseEndTimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CRunLaterPrivU3Ec__Iterator3_t1910754452, ___U3CpauseEndTimeU3E__0_1)); }
	inline float get_U3CpauseEndTimeU3E__0_1() const { return ___U3CpauseEndTimeU3E__0_1; }
	inline float* get_address_of_U3CpauseEndTimeU3E__0_1() { return &___U3CpauseEndTimeU3E__0_1; }
	inline void set_U3CpauseEndTimeU3E__0_1(float value)
	{
		___U3CpauseEndTimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_runLaterDelegate_2() { return static_cast<int32_t>(offsetof(U3CRunLaterPrivU3Ec__Iterator3_t1910754452, ___runLaterDelegate_2)); }
	inline RunLaterDelegate_t742861702 * get_runLaterDelegate_2() const { return ___runLaterDelegate_2; }
	inline RunLaterDelegate_t742861702 ** get_address_of_runLaterDelegate_2() { return &___runLaterDelegate_2; }
	inline void set_runLaterDelegate_2(RunLaterDelegate_t742861702 * value)
	{
		___runLaterDelegate_2 = value;
		Il2CppCodeGenWriteBarrier(&___runLaterDelegate_2, value);
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CRunLaterPrivU3Ec__Iterator3_t1910754452, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CRunLaterPrivU3Ec__Iterator3_t1910754452, ___U24current_4)); }
	inline Il2CppObject * get_U24current_4() const { return ___U24current_4; }
	inline Il2CppObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(Il2CppObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_4, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Edelay_5() { return static_cast<int32_t>(offsetof(U3CRunLaterPrivU3Ec__Iterator3_t1910754452, ___U3CU24U3Edelay_5)); }
	inline float get_U3CU24U3Edelay_5() const { return ___U3CU24U3Edelay_5; }
	inline float* get_address_of_U3CU24U3Edelay_5() { return &___U3CU24U3Edelay_5; }
	inline void set_U3CU24U3Edelay_5(float value)
	{
		___U3CU24U3Edelay_5 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3ErunLaterDelegate_6() { return static_cast<int32_t>(offsetof(U3CRunLaterPrivU3Ec__Iterator3_t1910754452, ___U3CU24U3ErunLaterDelegate_6)); }
	inline RunLaterDelegate_t742861702 * get_U3CU24U3ErunLaterDelegate_6() const { return ___U3CU24U3ErunLaterDelegate_6; }
	inline RunLaterDelegate_t742861702 ** get_address_of_U3CU24U3ErunLaterDelegate_6() { return &___U3CU24U3ErunLaterDelegate_6; }
	inline void set_U3CU24U3ErunLaterDelegate_6(RunLaterDelegate_t742861702 * value)
	{
		___U3CU24U3ErunLaterDelegate_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3ErunLaterDelegate_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
