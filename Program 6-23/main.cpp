/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 15th, 2021
** Description:  This program uses a referance variable as function parameter
*******************************************************************************/ 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//function prototype
void doubleNum(int &refVar);

int main()
{
    int value = 4;
    int secondValue = 10;

    cout << "In main, value is " << value << endl;
    cout << "Now calling doubleNum..." << endl;
    doubleNum(value);
    doubleNum(secondValue);

    cout << "Now back in main, value is " << value << endl;
    return 0;
}

void doubleNum(int &refVar)
{
    refVar *= 2;
}