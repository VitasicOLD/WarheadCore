/*
 * Copyright (C) 2016+     AzerothCore <www.azerothcore.org>
 * Copyright (C) 2008-2016 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2005-2009 MaNGOS <http://getmangos.com/>
 */

/// \addtogroup world
/// @{
/// \file

#ifndef __WEATHERMGR_H
#define __WEATHERMGR_H

#include "Define.h"

class Weather;
class Player;

namespace WeatherMgr
{
    AC_GAME_API void LoadWeatherData();

    AC_GAME_API Weather* FindWeather(uint32 id);
    AC_GAME_API Weather* AddWeather(uint32 zone_id);
    AC_GAME_API void RemoveWeather(uint32 zone_id);

    AC_GAME_API void SendFineWeatherUpdateToPlayer(Player* player);

    AC_GAME_API void Update(uint32 diff);
}

#endif
