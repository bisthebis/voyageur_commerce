#include "city.h"
#include <cmath>

City::City(double x, double y) : _x(x), _y(y)
{

}

double City::distance(const City &src) const
{
    double dx = _x - src._x;
    double dy = _y - src._y;
    return sqrt(dx*dx + dy*dy);
}
