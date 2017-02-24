#include "solutions.h"
#include <algorithm>

Solutions::Solutions(const World & world) : world(world), worldSize(world.size())
{
    g1.resize(SAMPLE_SIZE);
    generateFirst();
}

void Solutions::generateFirst()
{
    Solution startSample; startSample.resize(worldSize);
    for (int i = 0; i < worldSize; ++i)
        startSample[i] = i;

    for (auto & s : g1)
    {
        s = startSample;
        std::random_shuffle(s.begin(), s.end());
    }
}

Solutions::Solution Solutions::best() const {
    Solution best = g1[0];
    double bestScore = world.trySolution(best);
    for (int i = 1; i < SAMPLE_SIZE; ++i)
    {
        const Solution& toCompare = g1[i];
        double score = world.trySolution(toCompare);
        if (score < bestScore) //Lowest score is better
        {
            best = toCompare;
            bestScore = score;
        }
    }

    return best;
}
