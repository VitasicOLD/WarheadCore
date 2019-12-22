/*
 * Copyright (C) 2016+     AzerothCore <www.azerothcore.org>
 * Copyright (C) 2008-2016 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2005-2009 MaNGOS <http://getmangos.com/>
 */

#ifndef _ADDONMGR_H
#define _ADDONMGR_H

#include "Define.h"
#include <string>
#include <list>

struct AC_GAME_API AddonInfo
{
    AddonInfo(const std::string& name, uint8 enabled, uint32 crc, uint8 state, bool crcOrPubKey)
        : Name(name), Enabled(enabled), CRC(crc), State(state), UsePublicKeyOrCRC(crcOrPubKey) {}

    std::string Name;
    uint8 Enabled;
    uint32 CRC;
    uint8 State;
    bool UsePublicKeyOrCRC;
};

struct AC_GAME_API SavedAddon
{
    SavedAddon(const std::string& name, uint32 crc) : Name(name)
    {
        CRC = crc;
    }

    std::string Name;
    uint32 CRC;
};

struct AC_GAME_API BannedAddon
{
    uint32 Id;
    uint8 NameMD5[16];
    uint8 VersionMD5[16];
    uint32 Timestamp;
};

#define STANDARD_ADDON_CRC 0x4c1c776d

namespace AddonMgr
{
    AC_GAME_API void LoadFromDB();
    AC_GAME_API void SaveAddon(AddonInfo const& addon);
    AC_GAME_API SavedAddon const* GetAddonInfo(const std::string& name);

    typedef std::list<BannedAddon> BannedAddonList;
    AC_GAME_API BannedAddonList const* GetBannedAddons();
}

#endif

