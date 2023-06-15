/**
**Intent:
The intent of this pattern is to use sharing to support a large number of objects that have part of their internal state in common where the other part of state can vary.
**Problem:
Designing objects down to the lowest levels of system "granularity" provides optimal flexibility, but can be unacceptably expensive in terms of performance and memory usage.
**Solution:

**Statements:

**Applicability:
1- Use the Flyweight pattern only when your program must support a huge number of objects which barely fit into available RAM.
**Pros:
1-You can save lots of RAM, assuming your program has tons of similar objects.
**Cons:
1-You might be trading RAM over CPU cycles when some of the context data needs to be recalculated each time somebody calls a flyweight method.
2-The code becomes much more complicated. New team members will always be wondering why the state of an entity was separated in such a way.
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