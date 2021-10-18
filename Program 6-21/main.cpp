/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 15th, 2021
** Description:  Using a static Variable 
*******************************************************************************/ 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void showStatic();

int main()
{
    for (int count = 0; count < 5; count++)
    {
        /* code */
        showStatic();
    }
    
    return 0;
}

void showStatic()
{
    static int numCalls = 0;     //static local variable inside the function

    cout << "This function has been called " << ++numCalls << " times. " << endl;
}