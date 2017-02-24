#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include "solutions.h"

using namespace std;

int main(int argc, char *argv[])
{
    srand(unsigned (time(nullptr)));
    World world;
    Solutions sol(world);
    auto solution = sol.best();

    cout << "Solution tried is : " << endl;
    for (int i : solution)
        cout << i << " ";
    cout << endl;
    cout << world.trySolution(solution)<< endl;
    return 0;
}
