//Limiting the range of a random numbwer

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    unsigned seed;
    bool loop = true;

    int number;

    seed = time(0);

    const int MIN = 1;
    const int MAX = 6;

    srand(seed);

    while (loop)
    {
        number = rand() % (MAX - MIN + 1) + MIN;
        cout << "Welcome to random dice generator!" << endl;
        cout << "Press Enter to start the generator...";
        cin.get();

        cout << "Your dice number is: " << endl;
        cout << number;

        cout << endl;

        cout << "Run Again?" << endl;
        cout << "1 for Yes \n";
        cout << "0 for No \n";
        cin >> loop;
    }
    return 0;
}