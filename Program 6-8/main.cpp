/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 13th, 2021
** Description:  This program demonstrates a dunction with three parameters
*******************************************************************************/ 
#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

//Function prototype
void showSum(int num1, int num2, int num3);

int main()
{
    int value1, value2, value3;
    //get three int
    cout << "Enter three integers and I will display ";
    cout << "their sum: ";
    cin >> value1 >> value2 >> value3;

    //function call
    showSum(value1, value2, value3);

    return 0;
}

/***************************************
 * Function name: showSum
 * Discription: This functions displaus the sum of the
 *              three integers passed into its parameters.
 * ************************************************************/

void showSum(int num1, int num2, int num3)
{
    cout << "The sum is " << (num1 + num2 + num3) << endl;
}