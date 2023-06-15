/**
**Intent:
The intent of this pattern is to use sharing to support a large number of objects that have part of their internal state in common where the other part of state can vary.
**Problem:

**Solution:

**Statements:

**Applicability:

**Pros:

**Cons:
*/
#include <iostream>
#include "CounterStrike.h"
#include "Player.h"
#include "PlayerFactory.h"

int main()
{

    std::cout << "<!------Flyweight Design pattern---------!>\n";
    //? Assume that we have a total of 10 player in the game.
    int numberOfGames = 10;
    for (int i = 0; i < numberOfGames; i++)
    {
        Player *player = PlayerFactory::getPlayer(CounterStrike::getRandomPlayerType());
        player->assignWeapon(CounterStrike::getRandomWeapon());
        player->mission();
    }
    std::cout << "<!------------------>>>>>>>>>>>>-------------!>\n";

    return 0;
}