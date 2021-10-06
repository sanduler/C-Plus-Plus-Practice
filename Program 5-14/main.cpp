/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 6th, 2021
** Description:  This program is supposed to find the square root of five numbers
**               entered by the user. However, if a negative number is entered an error message
**               displays and a break statement is used to stop the loop early.
*******************************************************************************/ 
#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    double number;

    cout << "Enter five positive numbers seperated by spaces and \n";
    cout << "I will find their square roots" << endl;

    for (int count = 1; count <= 5; count++)
    {
        /* code */
        cin >> number;
        if (number >= 0.0)
        {
            /* code */
            cout << "\nThe sqaure root of " << number << " is " << sqrt(number);
        }
        else
        {
            cout << "\n\n " << number << " is negative. \n";
            cout << "I cannot find the square root \n";
            cout << "of a negative number. The prgoram is terminating.\n";
            break;
        }
    }
    return 0;
}