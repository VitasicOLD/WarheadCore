/*
 * Copyright (C) 2016+     AzerothCore <www.azerothcore.org>
 * Copyright (C) 2008-2016 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2005-2009 MaNGOS <http://getmangos.com/>
 */

#ifndef __NPCHANDLER_H
#define __NPCHANDLER_H

#include "Define.h"

struct AC_GAME_API QEmote
{
    uint32 _Emote;
    uint32 _Delay;
};

#define MAX_GOSSIP_TEXT_EMOTES 3

struct AC_GAME_API GossipTextOption
{
    std::string Text_0;
    std::string Text_1;
    uint32 BroadcastTextID;
    uint32 Language;
    float Probability;
    QEmote Emotes[MAX_GOSSIP_TEXT_EMOTES];
};

#define MAX_GOSSIP_TEXT_OPTIONS 8

struct AC_GAME_API GossipText
{
    GossipTextOption Options[MAX_GOSSIP_TEXT_OPTIONS];
};

struct AC_GAME_API PageTextLocale
{
    StringVector Text;
};

struct AC_GAME_API NpcTextLocale
{
    NpcTextLocale() { Text_0.resize(8); Text_1.resize(8); }

    std::vector<StringVector> Text_0;
    std::vector<StringVector> Text_1;
};

#endif
