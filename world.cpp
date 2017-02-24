#include "world.h"
#include <cassert>
#include <iterator>
#include <algorithm>

using namespace std;

World::World()
{
    City    A(20, 20),
            B(73, 15),
            C(52, 41),
            D(26, 76),
            E(84, 82);
    this->_cities = {A, B, C, D, E};
}

double World::trySolution(const vector<int>& indices) const
{

    assert (indices.size() == _cities.size());
    /*Check all indices are covered. Should be left over for performance*/
    {
        auto sortedIndices = indices;
        sort(begin(sortedIndices), end(sortedIndices));
        int i = 0;
        for (auto e : sortedIndices)
        {
            assert (e == i++);
        }
    }
    const int length = _cities.size();
    double sum = 0;
    for (int i = 0; i < (length - 1); ++i) //The last one should not be compared with its next
    {
        int index = indices[i];
        int nextIndex = indices[i+1];

        sum += _cities[index].distance(_cities[nextIndex]);
    }

    return sum;

}
