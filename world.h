#ifndef WORLD_H
#define WORLD_H

#include <vector>
#include "city.h"

class World
{
public:
    World();
    double trySolution(const std::vector<int> &indices);

private:
    std::vector<City> _cities;
};

#endif // WORLD_H
