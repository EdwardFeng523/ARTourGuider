#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// controlling
struct  controlling_t936058913  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject controlling::vbButtonObject
	GameObject_t1756533147 * ___vbButtonObject_2;
	// UnityEngine.GameObject controlling::chan
	GameObject_t1756533147 * ___chan_3;
	// UnityEngine.GameObject controlling::vid
	GameObject_t1756533147 * ___vid_4;

public:
	inline static int32_t get_offset_of_vbButtonObject_2() { return static_cast<int32_t>(offsetof(controlling_t936058913, ___vbButtonObject_2)); }
	inline GameObject_t1756533147 * get_vbButtonObject_2() const { return ___vbButtonObject_2; }
	inline GameObject_t1756533147 ** get_address_of_vbButtonObject_2() { return &___vbButtonObject_2; }
	inline void set_vbButtonObject_2(GameObject_t1756533147 * value)
	{
		___vbButtonObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___vbButtonObject_2, value);
	}

	inline static int32_t get_offset_of_chan_3() { return static_cast<int32_t>(offsetof(controlling_t936058913, ___chan_3)); }
	inline GameObject_t1756533147 * get_chan_3() const { return ___chan_3; }
	inline GameObject_t1756533147 ** get_address_of_chan_3() { return &___chan_3; }
	inline void set_chan_3(GameObject_t1756533147 * value)
	{
		___chan_3 = value;
		Il2CppCodeGenWriteBarrier(&___chan_3, value);
	}

	inline static int32_t get_offset_of_vid_4() { return static_cast<int32_t>(offsetof(controlling_t936058913, ___vid_4)); }
	inline GameObject_t1756533147 * get_vid_4() const { return ___vid_4; }
	inline GameObject_t1756533147 ** get_address_of_vid_4() { return &___vid_4; }
	inline void set_vid_4(GameObject_t1756533147 * value)
	{
		___vid_4 = value;
		Il2CppCodeGenWriteBarrier(&___vid_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
