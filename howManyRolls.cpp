#include "Die.h"
#include "Die.cpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int rollingTillTarget(Die die, int target, int attempts = 1)
{
    Die newDie;
    int numFromDie = die.roll();
    if (numFromDie == target)
    {
        return attempts;
    }
    else
    {
        return rollingTillTarget(newDie, target, attempts + 1);
    }
}

int main()
{
    srand(static_cast<unsigned>(time(0)));
    Die die(365);
    int target = (rand() % 365) + 1;
    std::cout << "Target: " << target << std::endl;

    int rolls = rollingTillTarget(die, target);
    std::cout << "Rolls needed to reach target: " << rolls << std::endl;
    return 0;
}
