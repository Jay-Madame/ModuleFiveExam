#pragma once
#include <iostream>
#include <ostream>

class Die
{
private:
    const int SIDES = 6;

public:
    Die();
    Die(int sides);
    int roll();
    friend std::ostream &operator<<(std::ostream &strm, const Die &obj);
};