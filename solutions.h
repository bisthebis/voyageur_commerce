#ifndef SOLUTIONS_H
#define SOLUTIONS_H

#include "world.h"
#include <vector>
#include <array>

class Solutions
{
    static const int SAMPLE_SIZE = 10;
    using Solution = std::vector<int>;
    using Generation = std::vector<Solution>;

public:
    Solutions(const World&);
    Solution best() const;
    Solution worst() const;

private:
    World world;
    int worldSize;
    Generation g1;

    void generateFirst();
};

#endif // SOLUTIONS_H
