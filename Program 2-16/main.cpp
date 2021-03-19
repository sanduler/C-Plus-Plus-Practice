//This program uses Boolean variables. 
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    bool boolValue;
    int count = 10;
    int i;

    boolValue = true;

    while(boolValue == true)
    {
        for (i = 0; i < count; i++)
        {
            cout << endl;
            cout << "*************" << endl;
            cout << "I am the best" << endl;
            cout << "*************" << endl;
        }
        boolValue = false;
    }
    return 0;
}