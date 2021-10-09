/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 8th, 2021
** Description:  This program converts all the tempetures from 0-30 using a loop
*******************************************************************************/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    double tempF;
    int temperature = 30;
    for (int i = 0; i <= temperature; i++)
    {
        /* code */
        tempF = ((9*i)/5) + 32;
        cout << "It is " << i << " degrees Celsius\n"; 
        cout << "The temperture in Fahrenheit is: " << tempF << endl;
    }

    return 0;
}