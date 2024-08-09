#include "Die.h"
#include "Die.cpp"
#include <iostream>

template <class T>
void consoleLog(T message);

int main()
{
    consoleLog(1);
    consoleLog(1.0);
    consoleLog("Hi!");

    Die newDie;
    consoleLog(newDie);

    return 0;
}

template <class T>
void consoleLog(T message)
{
    std::cout << message << std::endl;
}