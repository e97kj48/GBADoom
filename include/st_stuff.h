/* Emacs style mode select   -*- C++ -*-
 *-----------------------------------------------------------------------------
 *
 *
 *  PrBoom: a Doom port merged with LxDoom and LSDLDoom
 *  based on BOOM, a modified and improved DOOM engine
 *  Copyright (C) 1999 by
 *  id Software, Chi Hoang, Lee Killough, Jim Flynn, Rand Phares, Ty Halderman
 *  Copyright (C) 1999-2000 by
 *  Jess Haas, Nicolas Kalkhof, Colin Phipps, Florian Schulze
 *  Copyright 2005, 2006 by
 *  Florian Schulze, Colin Phipps, Neil Stevens, Andrey Budko
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 2
 *  of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 *  02111-1307, USA.
 *
 * DESCRIPTION:
 *      Status bar code.
 *      Does the face/direction indicator animatin.
 *      Does palette indicators as well (red pain/berserk, bright pickup)
 *
 *-----------------------------------------------------------------------------*/

#ifndef __STSTUFF_H__
#define __STSTUFF_H__

#include "doomtype.h"
#include "d_event.h"

// Size of statusbar.
// Now sensitive for scaling.

#define ST_HEIGHT 32
#define ST_WIDTH  320
#define ST_Y      (160 - ST_HEIGHT)
#define ST_SCALED_HEIGHT ST_HEIGHT
#define ST_SCALED_WIDTH  SCREENWIDTH
#define ST_SCALED_Y      (SCREENHEIGHT - ST_SCALED_HEIGHT)


//
// STATUS BAR DATA
//

// Palette indices.
// For damage/bonus red-/gold-shifts
#define STARTREDPALS            1
#define STARTBONUSPALS          9
#define NUMREDPALS              8
#define NUMBONUSPALS            4
// Radiation suit, green shift.
#define RADIATIONPAL            13

// Location of status bar
#define ST_X                    0
#define ST_X2                   104

#define ST_FX                   (ST_X+143)
#define ST_FY                   (ST_Y+1)

// Number of status faces.
#define ST_NUMPAINFACES         5
#define ST_NUMSTRAIGHTFACES     3
#define ST_NUMTURNFACES         2
#define ST_NUMSPECIALFACES      3

#define ST_FACESTRIDE \
          (ST_NUMSTRAIGHTFACES+ST_NUMTURNFACES+ST_NUMSPECIALFACES)

#define ST_NUMEXTRAFACES        2

#define ST_NUMFACES \
          (ST_FACESTRIDE*ST_NUMPAINFACES+ST_NUMEXTRAFACES)

#define ST_TURNOFFSET           (ST_NUMSTRAIGHTFACES)
#define ST_OUCHOFFSET           (ST_TURNOFFSET + ST_NUMTURNFACES)
#define ST_EVILGRINOFFSET       (ST_OUCHOFFSET + 1)
#define ST_RAMPAGEOFFSET        (ST_EVILGRINOFFSET + 1)
#define ST_GODFACE              (ST_NUMPAINFACES*ST_FACESTRIDE)
#define ST_DEADFACE             (ST_GODFACE+1)

#define ST_FACESX               (ST_X+103)
#define ST_FACESY               (ST_Y-64)

#define ST_EVILGRINCOUNT        (2*TICRATE)
//Fix Status bar face timing ~Kippykip
//#define ST_STRAIGHTFACECOUNT    (TICRATE*2)
#define ST_STRAIGHTFACECOUNT    (18)
#define ST_TURNCOUNT            (1*TICRATE)
#define ST_OUCHCOUNT            (1*TICRATE)
#define ST_RAMPAGEDELAY         (2*TICRATE)

#define ST_MUCHPAIN             20

// Location and size of widgets, from the top left of the screen

// AMMO number position (top right)
#define ST_AMMOWIDTH            3                   // Number of digits
#define ST_AMMOX                34
#define ST_AMMOY                4

// HEALTH number position (top right)
#define ST_HEALTHWIDTH          3                   // Number of digits
#define ST_HEALTHX              236
#define ST_HEALTHY              4

// ARMOR number position (top right)
#define ST_ARMORWIDTH           3                   // Number of digits
#define ST_ARMORX               236
#define ST_ARMORY               22

// Weapons owned position (top left)
#define ST_ARMSX                78
#define ST_ARMSY                4
#define ST_ARMSXSPACE           16                   // Space between sprites

// Frags pos.
#define ST_FRAGSX               (ST_X+138)
#define ST_FRAGSY               (ST_Y+3)
#define ST_FRAGSWIDTH           2

// Key icon positions.
#define ST_KEY0WIDTH            8
#define ST_KEY0HEIGHT           5
#define ST_KEY0X                (ST_X+178)
#define ST_KEY0Y                (ST_Y+3)

#define ST_KEY1WIDTH            ST_KEY0WIDTH
#define ST_KEY1X                (ST_X+178)
#define ST_KEY1Y                (ST_Y+13)

#define ST_KEY2WIDTH            ST_KEY0WIDTH
#define ST_KEY2X                (ST_X+178)
#define ST_KEY2Y                (ST_Y+23)


// Ammunition counter positions (top right)
// Bullet (Pistol) counter pos
#define ST_AMMO0WIDTH           3
#define ST_AMMO0HEIGHT          6
#define ST_AMMO0X               86
#define ST_AMMO0Y               16

// Shell counter pos
#define ST_AMMO1WIDTH           ST_AMMO0WIDTH
#define ST_AMMO1X               102
#define ST_AMMO1Y               16

// Bullet (Chaingun) counter pos
#define ST_AMMO4X               118
#define ST_AMMO4Y               16

// Cell (Plasma cannon) counter pos
#define ST_AMMO2WIDTH           ST_AMMO0WIDTH
#define ST_AMMO2X               150
#define ST_AMMO2Y               16

// Rocket counter pos
#define ST_AMMO3WIDTH           ST_AMMO0WIDTH
#define ST_AMMO3X               134
#define ST_AMMO3Y               16

// Cell (BFG9000) counter pos
#define ST_AMMO5X               166
#define ST_AMMO5Y               16


// Health icon position (top right)
#define ST_MAXAMMO0WIDTH        1
#define ST_MAXAMMO0X            206
#define ST_MAXAMMO0Y            4

// Armor icon position
#define ST_MAXAMMO1WIDTH        ST_MAXAMMO0WIDTH
#define ST_MAXAMMO1X            206
#define ST_MAXAMMO1Y            22

// Ammo icon postition
#define ST_MAXAMMO2WIDTH        ST_MAXAMMO0WIDTH
#define ST_MAXAMMO2X            44
#define ST_MAXAMMO2Y            4

#define ST_MAXAMMO3WIDTH        ST_MAXAMMO0WIDTH
#define ST_MAXAMMO3X            238
#define ST_MAXAMMO3Y            133


//
// STATUS BAR
//

// Called by main loop.
boolean ST_Responder(const event_t* ev);

// Called by main loop.
void ST_Ticker(void);

// Called by main loop.
void ST_Drawer(boolean st_statusbaron, boolean refresh);

// Called when the console player is spawned on each level.
void ST_Start(void);

// Called by startup code.
void ST_Init(void);

// States for status bar code.
typedef enum
{
  AutomapState,
  FirstPersonState
} st_stateenum_t;

// killough 5/2/98: moved from m_misc.c:

#endif
