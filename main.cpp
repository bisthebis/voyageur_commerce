#include <iostream>
#include "world.h"

using namespace std;

int main(int argc, char *argv[])
{
    World world;
    cout << world.trySolution({0,1,2,3,4})<< endl;
    return 0;
}
