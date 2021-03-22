//This program demosntrates the C++ time function 
// to provide seed for random number generator

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    unsigned seed;

    //Use time function to get a seed value for srand

    seed = time(0);

    srand(seed);

    cout << rand() << "         " << endl;
    cout << rand() << "         " << endl;
    cout << rand() << "         " << endl;

    return 0;
}