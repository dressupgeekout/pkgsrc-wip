// -----------------------------------------------------------------------------
//
// Copyright(C) 2023 by DooM Legacy Team
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// DESCRIPTION:
//      Support for additional map information in UMAPINFO format.
//
// -----------------------------------------------------------------------------

#ifndef UMAPINFO_H
#define UMAPINFO_H

#include "doomtype.h"


// Entry for episode menu
typedef struct emenu_t emenu_t;
struct emenu_t
{
    emenu_t    *next;

    const char *patch;  // Used only if valid for all menu entries
    const char *name;   // Episode name (used with HUD font without patch)
    const char *key;    // Keyboard key
};


// Usable only for monsters that call A_BossDeath
typedef struct bossaction_t bossaction_t;
struct bossaction_t
{
    bossaction_t *next;

    unsigned int  thing;    // Thing type (index for table of specification)
    unsigned int  special;  // Line special type
    unsigned int  tag;      // Sector tag
};


typedef enum tristate_t tristate_t;
enum tristate_t
{
    disabled,  // Similar to false
    enabled,   // Similar to true
    unchanged  // Default behaviour
};


typedef struct mapentry_t mapentry_t;
struct mapentry_t
{
    mapentry_t   *next;

    const char   *author;
    const char   *label;              // NULL: default, Empty: clear
    const char   *levelname;
    const char   *intertext;          // NULL: default, Empty: clear
    const char   *intertextsecret;    // NULL: default, Empty: clear
    const char   *interbackdrop;
    const char   *intermusic;
    const char   *nextmap;
    const char   *nextsecret;
    const char   *music;
    const char   *skytexture;
    const char   *levelpic;
    const char   *exitpic;
    const char   *enterpic;
    const char   *endpic;
    bossaction_t *bossactions;        // Linked list
    tristate_t    endgame;            // Can be undefined, false or true
    unsigned int  episode;
    unsigned int  map;
    unsigned int  partime;
    boolean       bossactions_clear;  // Clear all default boss actions
    boolean       nointermission;     // Skip the 'level finished' screen
    boolean       endbunny;           // End game after level, show bunny
    boolean       endcast;            // End game after lavel, show cast call
};


typedef struct umapinfo_t umapinfo_t;
struct umapinfo_t
{
    mapentry_t *entry_first;  // Linked list

    emenu_t    *emenu;        // Linked list
    boolean     emenu_clear;  // Clear all default episode menu entries
};


extern umapinfo_t umapinfo;


void UMI_LoadUMapInfoLump(lumpnum_t lumpnum);


void UMI_DestroyUMapInfo(void);


boolean UMI_ParseMapName(const char *mapname, byte *episode, byte * map);


mapentry_t *UMI_LookupUMapInfo(byte episode, byte map);


void UMI_Load_LevelInfo(void);


const char* UMI_GetMusicLumpName(const char* name);


#endif  // UMAPINFO_H
