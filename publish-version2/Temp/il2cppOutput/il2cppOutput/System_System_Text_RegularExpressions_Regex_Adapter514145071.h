#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t510977541;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Regex/Adapter
struct  Adapter_t514145071  : public Il2CppObject
{
public:
	// System.Text.RegularExpressions.MatchEvaluator System.Text.RegularExpressions.Regex/Adapter::ev
	MatchEvaluator_t510977541 * ___ev_0;

public:
	inline static int32_t get_offset_of_ev_0() { return static_cast<int32_t>(offsetof(Adapter_t514145071, ___ev_0)); }
	inline MatchEvaluator_t510977541 * get_ev_0() const { return ___ev_0; }
	inline MatchEvaluator_t510977541 ** get_address_of_ev_0() { return &___ev_0; }
	inline void set_ev_0(MatchEvaluator_t510977541 * value)
	{
		___ev_0 = value;
		Il2CppCodeGenWriteBarrier(&___ev_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
