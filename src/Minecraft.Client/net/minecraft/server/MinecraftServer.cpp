#include "net/minecraft/server/MinecraftServer.h"

MinecraftServer* MinecraftServer::sInstance = nullptr;

MinecraftServer* MinecraftServer::getInstance() {
    return sInstance;
}

PlayerList* MinecraftServer::getPlayers() {
    return m_players;
}
