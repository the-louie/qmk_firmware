#pragma once

#include "division.h"

#include "quantum.h"

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
	#include <avr/io.h>
	#include <avr/interrupt.h>
#endif
#endif

#define ___ KC_NO

#define LAYOUT_holyshit( \
	L00, L01, L02, L03, L04, L05,              R01, R02, R03, R04, R05, R06, \
	L10, L11, L12, L13, L14, L15,              R11, R12, R13, R14, R15, R16, \
	L20, L21, L22, L23, L24, L25, L26,    R20, R21, R22, R23, R24, R25, R26, \
	L30, L31, L32, L33, L34, L35, L36,    R30, R31, R32, R33, R34, R35, R36, \
	          L42, L43, L44, L45, L46,    R40, R41, R42, R43, R44 \
	) \
	{ \
		{ ___, ___, L02, L03, L04, L05, ___ }, \
		{ L00, L01, L12, L13, L14, L15, ___ }, \
		{ L10, L11, L22, L23, L24, L25, L26 }, \
		{ L20, L21, L32, L33, L34, L35, L36 }, \
		{ L30, L31, L42, L43, L44, L45, L46 }, \
    { ___, R01, R02, R03, R04, ___, ___ }, \
		{ ___, R11, R12, R13, R14, R05, R06 }, \
		{ R20, R21, R22, R23, R24, R15, R16 }, \
		{ R30, R31, R32, R33, R34, R25, R26 }, \
		{ R40, R41, R42, R43, R44, R35, R36 } \
	}


#define LAYOUT LAYOUT_holyshit
