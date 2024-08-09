#include "Die.h"
#include <cstdlib>
#include <string>

const int Die::SIDES;

Die::Die() : Die(SIDES)
{
}
Die::Die(int s) : sides(s)
{
}
int Die::roll() const
{
    srand(time(0));
    return (rand() % sides) + 1;
}
std::ostream &operator<<(std::ostream &strm, const Die &obj)
{
    strm << "A die, showing a " << std::to_string(obj.roll());
    return strm;
}