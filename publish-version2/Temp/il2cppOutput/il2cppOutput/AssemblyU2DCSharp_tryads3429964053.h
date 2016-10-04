#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_ChartboostSDK_CBStatusBarBehavio1280365899.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// tryads
struct  tryads_t3429964053  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.List`1<System.String> tryads::delegateHistory
	List_1_t1765447871 * ___delegateHistory_2;
	// System.Boolean tryads::showRewardedVideo
	bool ___showRewardedVideo_3;
	// UnityEngine.UI.Text tryads::starCount
	Text_t3286458198 * ___starCount_4;
	// UnityEngine.UI.Text tryads::starCount2
	Text_t3286458198 * ___starCount2_5;
	// ChartboostSDK.CBStatusBarBehavior tryads::statusBar
	int32_t ___statusBar_6;

public:
	inline static int32_t get_offset_of_delegateHistory_2() { return static_cast<int32_t>(offsetof(tryads_t3429964053, ___delegateHistory_2)); }
	inline List_1_t1765447871 * get_delegateHistory_2() const { return ___delegateHistory_2; }
	inline List_1_t1765447871 ** get_address_of_delegateHistory_2() { return &___delegateHistory_2; }
	inline void set_delegateHistory_2(List_1_t1765447871 * value)
	{
		___delegateHistory_2 = value;
		Il2CppCodeGenWriteBarrier(&___delegateHistory_2, value);
	}

	inline static int32_t get_offset_of_showRewardedVideo_3() { return static_cast<int32_t>(offsetof(tryads_t3429964053, ___showRewardedVideo_3)); }
	inline bool get_showRewardedVideo_3() const { return ___showRewardedVideo_3; }
	inline bool* get_address_of_showRewardedVideo_3() { return &___showRewardedVideo_3; }
	inline void set_showRewardedVideo_3(bool value)
	{
		___showRewardedVideo_3 = value;
	}

	inline static int32_t get_offset_of_starCount_4() { return static_cast<int32_t>(offsetof(tryads_t3429964053, ___starCount_4)); }
	inline Text_t3286458198 * get_starCount_4() const { return ___starCount_4; }
	inline Text_t3286458198 ** get_address_of_starCount_4() { return &___starCount_4; }
	inline void set_starCount_4(Text_t3286458198 * value)
	{
		___starCount_4 = value;
		Il2CppCodeGenWriteBarrier(&___starCount_4, value);
	}

	inline static int32_t get_offset_of_starCount2_5() { return static_cast<int32_t>(offsetof(tryads_t3429964053, ___starCount2_5)); }
	inline Text_t3286458198 * get_starCount2_5() const { return ___starCount2_5; }
	inline Text_t3286458198 ** get_address_of_starCount2_5() { return &___starCount2_5; }
	inline void set_starCount2_5(Text_t3286458198 * value)
	{
		___starCount2_5 = value;
		Il2CppCodeGenWriteBarrier(&___starCount2_5, value);
	}

	inline static int32_t get_offset_of_statusBar_6() { return static_cast<int32_t>(offsetof(tryads_t3429964053, ___statusBar_6)); }
	inline int32_t get_statusBar_6() const { return ___statusBar_6; }
	inline int32_t* get_address_of_statusBar_6() { return &___statusBar_6; }
	inline void set_statusBar_6(int32_t value)
	{
		___statusBar_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
