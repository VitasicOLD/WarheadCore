/*
 * Copyright (C) 2016+     AzerothCore <www.azerothcore.org>
 * Copyright (C) 2008-2016 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2005-2009 MaNGOS <http://getmangos.com/>
 */

#ifndef _ITEM_ENCHANTMENT_MGR_H
#define _ITEM_ENCHANTMENT_MGR_H

#include "Common.h"

AC_GAME_API void LoadRandomEnchantmentsTable();
AC_GAME_API uint32 GetItemEnchantMod(int32 entry);
AC_GAME_API uint32 GenerateEnchSuffixFactor(uint32 item_id);
#endif

