#ifndef PLAYER_FACTORY_H
#define PLAYER_FACTORY_H

#include <unordered_map>
#include "Constant.h"
#include "Player.h"
class PlayerFactory
{
private:
    static std::unordered_map<Constant::playerType, Player *> playerList;

public:
    static Player *getPlayer(Constant::playerType type);
};

#endif