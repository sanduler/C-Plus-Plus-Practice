/*
 * Name: Ruben Sanduleac
 * Date: 1/1/22
 */

#include <cstdlib>
#include <ctime>
#include "Dice.h"

Dice::Dice(int sides)
{
    if(sides >= 1)
    {
        srand(time(nullptr));
        numberOfSides = sides;
        currRoll = rand() % sides + 1;
    }
}

void Dice::roll()
{
    
}

int const Dice::getRoll()
{
    return 0;
}
