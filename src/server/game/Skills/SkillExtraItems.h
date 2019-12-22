/*
 * Copyright (C) 2016+     AzerothCore <www.azerothcore.org>
 * Copyright (C) 2008-2016 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2005-2009 MaNGOS <http://getmangos.com/>
 */

#ifndef ACORE_SKILL_EXTRA_ITEMS_H
#define ACORE_SKILL_EXTRA_ITEMS_H

#include "Common.h"

// predef classes used in functions
class Player;

// returns true and sets the appropriate info if the player can create a perfect item with the given spellId
AC_GAME_API bool CanCreatePerfectItem(Player* player, uint32 spellId, float &perfectCreateChance, uint32 &perfectItemType);

// load perfection proc info from DB
AC_GAME_API void LoadSkillPerfectItemTable();

// returns true and sets the appropriate info if the player can create extra items with the given spellId
AC_GAME_API bool canCreateExtraItems(Player* player, uint32 spellId, float &additionalChance, int32 &newMaxOrEntry);

// function to load the extra item creation info from DB
AC_GAME_API void LoadSkillExtraItemTable();

#endif
