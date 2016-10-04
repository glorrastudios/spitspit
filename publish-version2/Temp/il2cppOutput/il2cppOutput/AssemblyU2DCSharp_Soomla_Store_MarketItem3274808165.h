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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Store.MarketItem
struct  MarketItem_t3274808165  : public Il2CppObject
{
public:
	// System.String Soomla.Store.MarketItem::ProductId
	String_t* ___ProductId_0;
	// System.Double Soomla.Store.MarketItem::Price
	double ___Price_1;
	// System.String Soomla.Store.MarketItem::MarketPriceAndCurrency
	String_t* ___MarketPriceAndCurrency_2;
	// System.String Soomla.Store.MarketItem::MarketTitle
	String_t* ___MarketTitle_3;
	// System.String Soomla.Store.MarketItem::MarketDescription
	String_t* ___MarketDescription_4;
	// System.String Soomla.Store.MarketItem::MarketCurrencyCode
	String_t* ___MarketCurrencyCode_5;
	// System.Int64 Soomla.Store.MarketItem::MarketPriceMicros
	int64_t ___MarketPriceMicros_6;

public:
	inline static int32_t get_offset_of_ProductId_0() { return static_cast<int32_t>(offsetof(MarketItem_t3274808165, ___ProductId_0)); }
	inline String_t* get_ProductId_0() const { return ___ProductId_0; }
	inline String_t** get_address_of_ProductId_0() { return &___ProductId_0; }
	inline void set_ProductId_0(String_t* value)
	{
		___ProductId_0 = value;
		Il2CppCodeGenWriteBarrier(&___ProductId_0, value);
	}

	inline static int32_t get_offset_of_Price_1() { return static_cast<int32_t>(offsetof(MarketItem_t3274808165, ___Price_1)); }
	inline double get_Price_1() const { return ___Price_1; }
	inline double* get_address_of_Price_1() { return &___Price_1; }
	inline void set_Price_1(double value)
	{
		___Price_1 = value;
	}

	inline static int32_t get_offset_of_MarketPriceAndCurrency_2() { return static_cast<int32_t>(offsetof(MarketItem_t3274808165, ___MarketPriceAndCurrency_2)); }
	inline String_t* get_MarketPriceAndCurrency_2() const { return ___MarketPriceAndCurrency_2; }
	inline String_t** get_address_of_MarketPriceAndCurrency_2() { return &___MarketPriceAndCurrency_2; }
	inline void set_MarketPriceAndCurrency_2(String_t* value)
	{
		___MarketPriceAndCurrency_2 = value;
		Il2CppCodeGenWriteBarrier(&___MarketPriceAndCurrency_2, value);
	}

	inline static int32_t get_offset_of_MarketTitle_3() { return static_cast<int32_t>(offsetof(MarketItem_t3274808165, ___MarketTitle_3)); }
	inline String_t* get_MarketTitle_3() const { return ___MarketTitle_3; }
	inline String_t** get_address_of_MarketTitle_3() { return &___MarketTitle_3; }
	inline void set_MarketTitle_3(String_t* value)
	{
		___MarketTitle_3 = value;
		Il2CppCodeGenWriteBarrier(&___MarketTitle_3, value);
	}

	inline static int32_t get_offset_of_MarketDescription_4() { return static_cast<int32_t>(offsetof(MarketItem_t3274808165, ___MarketDescription_4)); }
	inline String_t* get_MarketDescription_4() const { return ___MarketDescription_4; }
	inline String_t** get_address_of_MarketDescription_4() { return &___MarketDescription_4; }
	inline void set_MarketDescription_4(String_t* value)
	{
		___MarketDescription_4 = value;
		Il2CppCodeGenWriteBarrier(&___MarketDescription_4, value);
	}

	inline static int32_t get_offset_of_MarketCurrencyCode_5() { return static_cast<int32_t>(offsetof(MarketItem_t3274808165, ___MarketCurrencyCode_5)); }
	inline String_t* get_MarketCurrencyCode_5() const { return ___MarketCurrencyCode_5; }
	inline String_t** get_address_of_MarketCurrencyCode_5() { return &___MarketCurrencyCode_5; }
	inline void set_MarketCurrencyCode_5(String_t* value)
	{
		___MarketCurrencyCode_5 = value;
		Il2CppCodeGenWriteBarrier(&___MarketCurrencyCode_5, value);
	}

	inline static int32_t get_offset_of_MarketPriceMicros_6() { return static_cast<int32_t>(offsetof(MarketItem_t3274808165, ___MarketPriceMicros_6)); }
	inline int64_t get_MarketPriceMicros_6() const { return ___MarketPriceMicros_6; }
	inline int64_t* get_address_of_MarketPriceMicros_6() { return &___MarketPriceMicros_6; }
	inline void set_MarketPriceMicros_6(int64_t value)
	{
		___MarketPriceMicros_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
