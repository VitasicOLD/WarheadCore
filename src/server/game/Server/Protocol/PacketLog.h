/*
 * Copyright (C) 2016+     AzerothCore <www.azerothcore.org>
 * Copyright (C) 2008-2016 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2005-2009 MaNGOS <http://getmangos.com/>
 */

#ifndef ACORE_PACKETLOG_H
#define ACORE_PACKETLOG_H

#include "Common.h"

enum Direction
{
    CLIENT_TO_SERVER,
    SERVER_TO_CLIENT
};

class WorldPacket;

class AC_GAME_API PacketLog
{
    private:
        PacketLog();
        ~PacketLog();

    public:
        static PacketLog* instance();

        void Initialize();
        bool CanLogPacket() const { return (_file != NULL); }
        void LogPacket(WorldPacket const& packet, Direction direction);

    private:
        FILE* _file;
};

#define sPacketLog PacketLog::instance()

#endif
