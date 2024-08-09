#pragma once
#include <iostream>
#include <ostream>

class Die
{
private:
    static const int SIDES = 6;
    int sides;

public:
    Die();
    Die(int s);
    int roll() const;
    friend std::ostream &operator<<(std::ostream &strm, const Die &obj);
};