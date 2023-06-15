#include "PlayerFactory.h"
#include "Terrorist.h"
#include "CounterTerrorist.h"

std::unordered_map<Constant::playerType, Player *> PlayerFactory::playerList;
Player *PlayerFactory::getPlayer(Constant::playerType type)
{
    Player *p = nullptr;
    if (playerList.find(type) != playerList.end())
    {
        p = playerList[type];
    }
    else
    {
        switch (type)
        {
        case Constant::playerType::TERRORIST:
            p = new Terrorist();
            break;
        case Constant::playerType::COUNTER_TERRORIST:
            p = new CounterTerrorist();
            break;
        default:
            break;
        }
        playerList[type] = p;
    }
    return p;
}