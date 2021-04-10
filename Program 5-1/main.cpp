//This program demonstrates a simple while loop
#include <iostream>
using namespace std;

int main()
{
    int count = 1;

    while(count <= 5)
    {
        cout << "Hello ";
        count = count + 1; 
    }
    cout << "\n Thats all!!!" << endl;
    return 0;
}