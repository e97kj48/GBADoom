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
 *  Printed strings for translation.
 *  English language support (default).
 *  See dstrings.h for suggestions about foreign language BEX support
 *
 *-----------------------------------------------------------------------------*/

#ifndef __D_ENGLSH__
#define __D_ENGLSH__

/* d_main.c */
#define D_DEVSTR    "Development mode ON.\n"
#define D_CDROM     "CD-ROM Version: default.cfg from c:\\doomdata\n"

/* m_menu.c */
#define PRESSKEY    "press a key."
#define PRESSYN     "press A or B."
#define QUITMSG     "are you sure you want to\nquit this great game?"
#define LOADNET     "you can't do load while in a net game!\n\n"PRESSKEY
#define QLOADNET    "you can't quickload during a netgame!\n\n"PRESSKEY
#define QSAVESPOT   "you haven't picked a quicksave slot yet!\n\n"PRESSKEY
#define SAVEDEAD    "you can't save if\nyou aren't playing!\n\n"PRESSKEY
#define QSPROMPT    "quicksave over your game named\n\n'%s'?\n\n"PRESSYN
#define QLPROMPT    "do you want to quickload the game named\n\n'%s'?\n\n"PRESSYN

#define NEWGAME \
  "you can't start a new game\n"\
  "while in a network game.\n\n"PRESSKEY

#define NIGHTMARE \
  "are you sure? this skill level\n"\
  "isn't even remotely fair.\n\n"PRESSYN

#define SWSTRING  \
  "this is the shareware version\n"\
  "of doom. You need to order\n"\
  "the entire trilogy.\n\n"PRESSKEY

#define MSGOFF      "Messages OFF"
#define MSGON       "Messages ON"

#define RUNOFF      "Take your time."
#define RUNON       "In a hurry, marine?"

#define HIGHDETAIL  "High Detail."
#define LOWDETAIL   "Low Detail."

#define NETEND      "you can't end a netgame!\n\n"PRESSKEY
#define ENDGAME     "are you sure you want to\nend the game?\n\n"PRESSYN
#define RESTARTLEVEL "restart the level?\n\n"PRESSYN

#define DOSY        "(press y to quit)"

#define DETAILHI    "High detail"
#define DETAILLO    "Low detail"
#define GAMMALVL0   "Gamma correction OFF"
#define GAMMALVL4   "Gamma correction ON"
#define EMPTYSTRING "empty slot"

/* p_inter.c */
#define GOTARMOR    "Picked up the armor."
#define GOTMEGA     "Picked up the MegaArmor!"
#define GOTHTHBONUS "Picked up a health bonus."
#define GOTARMBONUS "Picked up an armor bonus."
#define GOTSTIM     "Picked up a stimpack."
#define GOTMEDIKIT  "Picked up a medikit."
//#define GOTMEDINEED "Picked up a medikit that you REALLY need!" - String is too long for GBA res
#define GOTMEDINEED  "Picked up a medikit."
#define GOTSUPER    "Supercharge!"

#define GOTBLUECARD "Picked up a blue bone."
#define GOTYELWCARD "Picked up a yellow bone."
#define GOTREDCARD  "Picked up a red bone."
#define GOTBLUESKUL "Picked up a blue skull key."
#define GOTYELWSKUL "Picked up a yellow skull key."
#define GOTREDSKULL "Picked up a red skull key."

#define GOTINVUL    "Invulnerability!"
#define GOTBERSERK  "Berserk!"
#define GOTINVIS    "Partial Invisibility"
#define GOTSUIT     "Radiation Shielding Suit"
#define GOTMAP      "Computer Area Map"
#define GOTVISOR    "Light Amplification Visor"
#define GOTMSPHERE  "MegaSphere!"

#define GOTCLIP     "Picked up a clip."
#define GOTCLIPBOX  "Picked up a box of bullets."
#define GOTROCKET   "Picked up a rocket."
#define GOTROCKBOX  "Picked up a box of rockets."
#define GOTCELL     "Picked up an energy cell."
#define GOTCELLBOX  "Picked up an energy cell pack."
#define GOTSHELLS   "Picked up 4 shotgun shells."
#define GOTSHELLBOX "Picked up a box of shotgun shells."
#define GOTBACKPACK "Picked up a backpack full of ammo!"

#define GOTBFG9000  "You got the BFG9000!  Oh, yes."
#define GOTCHAINGUN "You got the chaingun!"
#define GOTCHAINSAW "A chainsaw!  Find some meat!"
#define GOTLAUNCHER "You got the rocket launcher!"
#define GOTPLASMA   "You got the plasma gun!"
#define GOTSHOTGUN  "You got the shotgun!"
#define GOTSHOTGUN2 "You got the super shotgun!"

/* p_doors.c */
#define PD_BLUEO    "You need a blue bone to activate"
#define PD_REDO     "You need a red bone to activate"
#define PD_YELLOWO  "You need a yellow bone to activate"
#define PD_BLUEK    "You need a blue bone to open"
#define PD_REDK     "You need a red bone to open"
#define PD_YELLOWK  "You need a yellow bone to open"
/* jff 02/05/98 Create messages specific to card and skull keys */
#define PD_BLUEC    "You need a blue card to open"
#define PD_REDC     "You need a red card to open"
#define PD_YELLOWC  "You need a yellow card to open"
#define PD_BLUES    "You need a blue skull to open"
#define PD_REDS     "You need a red skull to open"
#define PD_YELLOWS  "You need a yellow skull to open"
#define PD_ANY      "Any bone will open"
#define PD_ALL3     "You need all three bones to open"
#define PD_ALL6     "You need all six bones to open"

/* g_game.c */
#define GGSAVED     "game saved."

/* hu_stuff.c */
#define HUSTR_MSGU  "[Message unsent]"

#define HUSTR_E1M1  "E1M1: "
#define HUSTR_E1M2  "E1M2: "
#define HUSTR_E1M3  "E1M3: "
#define HUSTR_E1M4  "E1M4: "
#define HUSTR_E1M5  "E1M5: "
#define HUSTR_E1M6  "E1M6: "
#define HUSTR_E1M7  "E1M7: "
#define HUSTR_E1M8  "E1M8: "
#define HUSTR_E1M9  "E1M9: "

#define HUSTR_E2M1  "E2M1: "
#define HUSTR_E2M2  "E2M2: "
#define HUSTR_E2M3  "E2M3: "
#define HUSTR_E2M4  "E2M4: "
#define HUSTR_E2M5  "E2M5: "
#define HUSTR_E2M6  "E2M6: "
#define HUSTR_E2M7  "E2M7: "
#define HUSTR_E2M8  "E2M8: "
#define HUSTR_E2M9  "E2M9: "

#define HUSTR_E3M1  "E3M1: "
#define HUSTR_E3M2  "E3M2: "
#define HUSTR_E3M3  "E3M3: "
#define HUSTR_E3M4  "E3M4: "
#define HUSTR_E3M5  "E3M5: "
#define HUSTR_E3M6  "E3M6: "
#define HUSTR_E3M7  "E3M7: "
#define HUSTR_E3M8  "E3M8: "
#define HUSTR_E3M9  "E3M9: "

#define HUSTR_E4M1  "E4M1: "
#define HUSTR_E4M2  "E4M2: "
#define HUSTR_E4M3  "E4M3: "
#define HUSTR_E4M4  "E4M4: "
#define HUSTR_E4M5  "E4M5: "
#define HUSTR_E4M6  "E4M6: "
#define HUSTR_E4M7  "E4M7: "
#define HUSTR_E4M8  "E4M8: "
#define HUSTR_E4M9  "E4M9: "

#define HUSTR_1     "level 1: tutorial"
#define HUSTR_2     "level 2: "
#define HUSTR_3     "level 3: "
#define HUSTR_4     "level 4: "
#define HUSTR_5     "level 5: "
#define HUSTR_6     "level 6: "
#define HUSTR_7     "level 7: "
#define HUSTR_8     "level 8: "
#define HUSTR_9     "level 9: "
#define HUSTR_10    "level 10: "
#define HUSTR_11    "level 11: "

#define HUSTR_12    "level 12: "
#define HUSTR_13    "level 13: "
#define HUSTR_14    "level 14: "
#define HUSTR_15    "level 15: "
#define HUSTR_16    "level 16: "
#define HUSTR_17    "level 17: "
#define HUSTR_18    "level 18: "
#define HUSTR_19    "level 19: "
#define HUSTR_20    "level 20: "

#define HUSTR_21    "level 21: "
#define HUSTR_22    "level 22: "
#define HUSTR_23    "level 23: "
#define HUSTR_24    "level 24: "
#define HUSTR_25    "level 25: "
#define HUSTR_26    "level 26: "
#define HUSTR_27    "level 27: "
#define HUSTR_28    "level 28: "
#define HUSTR_29    "level 29: "
#define HUSTR_30    "level 30: "

#define HUSTR_31    "level 31: "
#define HUSTR_32    "level 32: "

#define PHUSTR_1    "level 1: "
#define PHUSTR_2    "level 2: "
#define PHUSTR_3    "level 3: "
#define PHUSTR_4    "level 4: "
#define PHUSTR_5    "level 5: "
#define PHUSTR_6    "level 6: "
#define PHUSTR_7    "level 7: "
#define PHUSTR_8    "level 8: "
#define PHUSTR_9    "level 9: "
#define PHUSTR_10   "level 10: "
#define PHUSTR_11   "level 11: "

#define PHUSTR_12   "level 12: "
#define PHUSTR_13   "level 13: "
#define PHUSTR_14   "level 14: "
#define PHUSTR_15   "level 15: "
#define PHUSTR_16   "level 16: "
#define PHUSTR_17   "level 17: "
#define PHUSTR_18   "level 18: "
#define PHUSTR_19   "level 19: "
#define PHUSTR_20   "level 20: "

#define PHUSTR_21   "level 21: "
#define PHUSTR_22   "level 22: "
#define PHUSTR_23   "level 23: "
#define PHUSTR_24   "level 24: "
#define PHUSTR_25   "level 25: "
#define PHUSTR_26   "level 26: "
#define PHUSTR_27   "level 27: "
#define PHUSTR_28   "level 28: "
#define PHUSTR_29   "level 29: "
#define PHUSTR_30   "level 30: "

#define PHUSTR_31   "level 31: "
#define PHUSTR_32   "level 32: "

#define THUSTR_1    "level 1: "
#define THUSTR_2    "level 2: "
#define THUSTR_3    "level 3: "
#define THUSTR_4    "level 4: "
#define THUSTR_5    "level 5: "
#define THUSTR_6    "level 6: "
#define THUSTR_7    "level 7: "
#define THUSTR_8    "level 8: "
#define THUSTR_9    "level 9: "
#define THUSTR_10   "level 10: "
#define THUSTR_11   "level 11: "

#define THUSTR_12   "level 12: "
#define THUSTR_13   "level 13: "
#define THUSTR_14   "level 14: "
#define THUSTR_15   "level 15: "
#define THUSTR_16   "level 16: "
#define THUSTR_17   "level 17: "
#define THUSTR_18   "level 18: "
#define THUSTR_19   "level 19: "
#define THUSTR_20   "level 20: "

#define THUSTR_21   "level 21: "
#define THUSTR_22   "level 22: "
#define THUSTR_23   "level 23: "
#define THUSTR_24   "level 24: "
#define THUSTR_25   "level 25: "
#define THUSTR_26   "level 26: "
#define THUSTR_27   "level 27: "
#define THUSTR_28   "level 28: "
#define THUSTR_29   "level 29: "
#define THUSTR_30   "level 30: "

#define THUSTR_31   "level 31: "
#define THUSTR_32   "level 32: "

#define HUSTR_CHATMACRO1  "I'm ready to kick butt!"
#define HUSTR_CHATMACRO2  "I'm OK."
#define HUSTR_CHATMACRO3  "I'm not looking too good!"
#define HUSTR_CHATMACRO4  "Help!"
#define HUSTR_CHATMACRO5  "You suck!"
#define HUSTR_CHATMACRO6  "Next time, scumbag..."
#define HUSTR_CHATMACRO7  "Come here!"
#define HUSTR_CHATMACRO8  "I'll take care of it."
#define HUSTR_CHATMACRO9  "Yes"
#define HUSTR_CHATMACRO0  "No"

#define HUSTR_TALKTOSELF1 "You mumble to yourself"
#define HUSTR_TALKTOSELF2 "Who's there?"
#define HUSTR_TALKTOSELF3 "You scare yourself"
#define HUSTR_TALKTOSELF4 "You start to rave"
#define HUSTR_TALKTOSELF5 "You've lost it..."

#define HUSTR_MESSAGESENT "[Message Sent]"

/* The following should NOT be changed unless it seems
 * just AWFULLY necessary */

#define HUSTR_PLRGREEN    "Player 1: "
#define HUSTR_PLRINDIGO   "Player 2: "
#define HUSTR_PLRBROWN    "Player 3: "
#define HUSTR_PLRRED      "Player 4: "

#define HUSTR_KEYGREEN    'g'
#define HUSTR_KEYINDIGO   'i'
#define HUSTR_KEYBROWN    'b'
#define HUSTR_KEYRED      'r'

/* am_map.c */

#define AMSTR_FOLLOWON    "Follow Mode ON"
#define AMSTR_FOLLOWOFF   "Follow Mode OFF"

#define AMSTR_GRIDON      "Grid ON"
#define AMSTR_GRIDOFF     "Grid OFF"

#define AMSTR_MARKEDSPOT  "Marked Spot"
#define AMSTR_MARKSCLEARED  "All Marks Cleared"

#define AMSTR_ROTATEON    "Rotate Mode ON"
#define AMSTR_ROTATEOFF   "Rotate Mode OFF"

#define AMSTR_OVERLAYON    "Overlay Mode ON"
#define AMSTR_OVERLAYOFF   "Overlay Mode OFF"

/* st_stuff.c */

#define STSTR_MUS       "Music Change"
#define STSTR_NOMUS     "IMPOSSIBLE SELECTION"
#define STSTR_DQDON     "Degreelessness Mode On"
#define STSTR_DQDOFF    "Degreelessness Mode Off"

#define STSTR_KFAADDED  "Very Happy Ammo Added"
#define STSTR_FAADDED   "Ammo (no keys) Added"

#define STSTR_NCON      "No Clipping Mode ON"
#define STSTR_NCOFF     "No Clipping Mode OFF"

#define STSTR_BEHOLD    "inVuln, Str, Inviso, Rad, Allmap, or Lite-amp"
#define STSTR_BEHOLDX   "Power-up Toggled"

#define STSTR_CHOPPERS  "... doesn't suck - GM"
#define STSTR_CLEV      "Changing Level..."

#define STSTR_COMPON    "Compatibility Mode On"            /* phares */
#define STSTR_COMPOFF   "Compatibility Mode Off"           /* phares */

#define STSTR_ROCKETON    "Enemy Rockets On"
#define STSTR_ROCKETOFF   "Enemy Rockets Off"

#define STSTR_FPSON    "FPS Counter On"
#define STSTR_FPSOFF   "FPS Counter Off"

/* f_finale.c */

#define E1TEXT \
  "Once you beat the big badasses\n"\
  "and clean out the moon base\n"\
  "you're supposed to win?\n"\
  "Where's your ticket home?\n"\
  "What the hell is this? It's not\n"\
  "supposed to end this way!\n"\
  "\n" \
  "It stinks like rotten meat, but\n"\
  "looks like the lost Deimos base.\n"\
  "You're stuck on The Shores of\n"\
  "Hell.\n"\
  "The only way out is through."

#define E2TEXT \
  "You've done it! The hideous\n"\
  "cyber-demon that ruled the\n"\
  "lost Deimos moon base has been\n"\
  "slain and you are triumphant!\n"\
  "But...where are you?\n"\
  "You clamber to the edge of the\n"\
  "moon and see the awful truth.\n" \
  "\n"\
  "Deimos floats above Hell itself!\n"\
  "You've never heard of anyone\n"\
  "escaping from Hell, but you'll\n"\
  "make the bastards sorry they\n"\
  "ever heard of you!"


#define E3TEXT \
  "The loathsome spiderdemon that\n"\
  "masterminded the invasion of the\n"\
  "moon bases and caused so much\n"\
  "death has had its ass kicked.\n"\
  "\n"\
  "A hidden doorway opens.\n"\
  "You've proven too tough for\n"\
  "Hell to contain, and now Hell at\n"\
  "last plays fair -- you emerge\n"\
  "from the door to see the green\n"\
  "fields of Earth! Home at last.\n"

#define E4TEXT \
  "the spider mastermind must have\n"\
  "sent forth its legions of\n"\
  "hellspawn before your final\n"\
  "confrontation with that\n"\
  "terrible beast from hell.\n"\
  "but you stepped forward and\n"\
  "brought eternal damnation\n"\
  "and suffering upon the horde as\n"\
  "a true hero would in the face\n"\
  "of evil.\n"\
  "besides, someone is gonna pay for\n"\
  "what happened to daisy.\n"\
  "next stop, hell on earth!"


/* after level 6, put this: */

// 13 lines max

#define C1TEXT \
  "-- THANKS FOR PLAYING! --\n"\
  "RESOURCES USED:\n"\
  "DOOM OPEN SOURCE RELEASE\n"\
  " BY ID SOFTWARE\n"\
  "GBADOOM\n"\
  " BY DOOMHACK\n"\
  "MUSIC\n"\
  " BY NIKKU4211\n"\
  "MINIWAD BY FRAGGLE\n"\
  "SHIBA INU BY PANKITTENCHEN\n"\
  "SOUNDS FROM FREESOUND.ORG\n"\
  "NOTO SANS VIA GOOGLE FONTS\n"\


/* After level 11, put this: */

#define C2TEXT \
"SOUNDS USED:\n"\
"Beep_06_low_2015-06-22.wav\n"\
"Beep_06_single_2015-06-22.wav\n"\
"Beep_06_triple_2015-06-22.wav\n"\
"Beep_06_double_2015-06-22.wav\n"\
" BY PAULMOREK\n"\
"BARKING DOG\n"\
" BY NACHTMAHRTV\n"\
"open and close wooden door.wav\n"\
" BY FRESCO\n"\

/* After level 20, put this: */

#define C3TEXT \
"SOFTWARE USED / SPECIAL THANKS:\n"\
"GBADOOM * SLADE * WHACKED4\n"\
"ULTIMATE DOOM BUILDER * SLADE\n"\
"ASEPRITE * GIMP * BLENDER\n"\
"NOTEPAD++ * VISUAL STUDIO\n"\
"DEVKITPRO * MGBA * OBS\n"\
"ALAUX * ALPER002 * BRIDGEBURNER\n"\
"CONSCARS * DAMIAN YERRICK\n"\
"HELL PIKE * KAAPELI47 * KIPPYKIP\n"\
"MTROP * PROVERBIAL * R93 SNIPER\n"\
"SHAKAR-A'TAR * THEMISTERCAT\n"\
"EXELOTL * LOSANATINF\n"\
"NOT CINEMINT * PLASTERED CRAB\n"\

/* After level 29, put this: */

#define C4TEXT \
  "THE HORRENDOUS VISAGE OF THE\n"\
  "BIGGEST DEMON YOU'VE EVER SEEN\n"\
  "CRUMBLES BEFORE YOU, AFTER YOU\n"\
  "PUMP ROCKETS INTO HIS EXPOSED\n"\
  "BRAIN. THE MONSTERS THRASHING\n"\
  "LIMBS DEVASTATING UNTOLD MILES\n"\
  "OF HELL'S SURFACE.\n"\
  "YOU'VE DONE IT. THE INVASION IS\n"\
  "OVER. HELL IS A WRECK.\n"\
  "YOU BEGIN THE LONG TREK BACK\n"\
  "HOME. REBUILDING EARTH WILL\n"\
  "BE A LOT LESS FUN THAN\n"\
  "RUINING IT WAS."

/* Before level 31, put this: */

#define C5TEXT \
  "CONGRATULATIONS, YOU'VE FOUND\n"\
  "THE SECRET LEVEL! LOOKS LIKE\n"\
  "IT'S BEEN BUILT BY HUMANS,\n"\
  "RATHER THAN DEMONS. YOU WONDER\n"\
  "WHO THE INMATES OF THIS CORNER\n"\
  "OF HELL WILL BE."


/* Before level 32, put this: */

#define C6TEXT \
  "CONGRATULATIONS, YOU'VE FOUND\n"\
  "THE SUPER SECRET LEVEL!\n"\
  "YOU'D BETTER BLAZE THROUGH\n"\
  "THIS ONE!"

/*** Plutonia ***/
/* after map 06 */

#define P1TEXT  \
  "You gloat over the steaming carcass of the\n"\
  "Guardian.  With its death, you've wrested\n"\
  "the Accelerator from the stinking claws\n"\
  "of Hell.  You relax and glance around the\n"\
  "room.  Damn!  There was supposed to be at\n"\
  "least one working prototype, but you can't\n"\
  "see it. The demons must have taken it.\n"\
  "\n"\
  "You must find the prototype, or all your\n"\
  "struggles will have been wasted. Keep\n"\
  "moving, keep fighting, keep killing.\n"\
  "Oh yes, keep living, too."


/* after map 11 */

#define P2TEXT \
  "Even the deadly Arch-Vile labyrinth could\n"\
  "not stop you, and you've gotten to the\n"\
  "prototype Accelerator which is soon\n"\
  "efficiently and permanently deactivated.\n"\
  "\n"\
  "You're good at that kind of thing."


/* after map 20 */

#define P3TEXT \
  "You've bashed and battered your way into\n"\
  "the heart of the devil-hive.  Time for a\n"\
  "Search-and-Destroy mission, aimed at the\n"\
  "Gatekeeper, whose foul offspring is\n"\
  "cascading to Earth.  Yeah, he's bad. But\n"\
  "you know who's worse!\n"\
  "\n"\
  "Grinning evilly, you check your gear, and\n"\
  "get ready to give the bastard a little Hell\n"\
  "of your own making!"

/* after map 30 */

#define P4TEXT \
  "The Gatekeeper's evil face is splattered\n"\
  "all over the place.  As its tattered corpse\n"\
  "collapses, an inverted Gate forms and\n"\
  "sucks down the shards of the last\n"\
  "prototype Accelerator, not to mention the\n"\
  "few remaining demons.  You're done. Hell\n"\
  "has gone back to pounding bad dead folks \n"\
  "instead of good live ones.  Remember to\n"\
  "tell your grandkids to put a rocket\n"\
  "launcher in your coffin. If you go to Hell\n"\
  "when you die, you'll need it for some\n"\
  "final cleaning-up ..."

/* before map 31 */

#define P5TEXT \
  "You've found the second-hardest level we\n"\
  "got. Hope you have a saved game a level or\n"\
  "two previous.  If not, be prepared to die\n"\
  "aplenty. For master marines only."

/* before map 32 */

#define P6TEXT \
  "Betcha wondered just what WAS the hardest\n"\
  "level we had ready for ya?  Now you know.\n"\
  "No one gets out alive."

/*** TNT: Evilution ***/

#define T1TEXT \
  "You've fought your way out of the infested\n"\
  "experimental labs.   It seems that UAC has\n"\
  "once again gulped it down.  With their\n"\
  "high turnover, it must be hard for poor\n"\
  "old UAC to buy corporate health insurance\n"\
  "nowadays..\n"\
  "\n"\
  "Ahead lies the military complex, now\n"\
  "swarming with diseased horrors hot to get\n"\
  "their teeth into you. With luck, the\n"\
  "complex still has some warlike ordnance\n"\
  "laying around."


#define T2TEXT \
  "You hear the grinding of heavy machinery\n"\
  "ahead.  You sure hope they're not stamping\n"\
  "out new hellspawn, but you're ready to\n"\
  "ream out a whole herd if you have to.\n"\
  "They might be planning a blood feast, but\n"\
  "you feel about as mean as two thousand\n"\
  "maniacs packed into one mad killer.\n"\
  "\n"\
  "You don't plan to go down easy."


#define T3TEXT \
  "The vista opening ahead looks real damn\n"\
  "familiar. Smells familiar, too -- like\n"\
  "fried excrement. You didn't like this\n"\
  "place before, and you sure as hell ain't\n"\
  "planning to like it now. The more you\n"\
  "brood on it, the madder you get.\n"\
  "Hefting your gun, an evil grin trickles\n"\
  "onto your face. Time to take some names."

#define T4TEXT \
  "Suddenly, all is silent, from one horizon\n"\
  "to the other. The agonizing echo of Hell\n"\
  "fades away, the nightmare sky turns to\n"\
  "blue, the heaps of monster corpses start \n"\
  "to evaporate along with the evil stench \n"\
  "that filled the air. Jeeze, maybe you've\n"\
  "done it. Have you really won?\n"\
  "\n"\
  "Something rumbles in the distance.\n"\
  "A blue light begins to glow inside the\n"\
  "ruined skull of the demon-spitter."


#define T5TEXT \
  "What now? Looks totally different. Kind\n"\
  "of like King Tut's condo. Well,\n"\
  "whatever's here can't be any worse\n"\
  "than usual. Can it?  Or maybe it's best\n"\
  "to let sleeping gods lie.."


#define T6TEXT \
  "Time for a vacation. You've burst the\n"\
  "bowels of hell and by golly you're ready\n"\
  "for a break. You mutter to yourself,\n"\
  "Maybe someone else can kick Hell's ass\n"\
  "next time around. Ahead lies a quiet town,\n"\
  "with peaceful flowing water, quaint\n"\
  "buildings, and presumably no Hellspawn.\n"\
  "\n"\
  "As you step off the transport, you hear\n"\
  "the stomp of a cyberdemon's iron shoe."



/*
 * Character cast strings F_FINALE.C
 */
#define CC_ZOMBIE "ZOMBIEMAN"
#define CC_SHOTGUN  "SHOTGUN GUY"
#define CC_HEAVY  "HEAVY WEAPON DUDE"
#define CC_IMP  "IMP"
#define CC_DEMON  "DEMON"
#define CC_LOST "LOST SOUL"
#define CC_CACO "CACODEMON"
#define CC_HELL "HELL KNIGHT"
#define CC_BARON  "BARON OF HELL"
#define CC_ARACH  "ARACHNOTRON"
#define CC_PAIN "PAIN ELEMENTAL"
#define CC_REVEN  "REVENANT"
#define CC_MANCU  "MANCUBUS"
#define CC_ARCH "ARCH-VILE"
#define CC_SPIDER "THE SPIDER MASTERMIND"
#define CC_CYBER  "THE CYBERDEMON"
#define CC_HERO "OUR HERO"


#endif
