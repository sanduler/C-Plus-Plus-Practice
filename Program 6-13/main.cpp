/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 13th, 2021
** Description:  This program demonstrates the use of functions that returns true or false.
*******************************************************************************/ 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//Function prototypes
bool isEven(int);

int main()
{
    int val;        //the value to be tested

    cout << endl;
    
    //get a number from the user
    cout << "Enter an integer and I will tell you ";
    cout << "if its odd or even: ";
    cin >> val;

    //Indicate whether it is odd or even
    if(isEven(val))
    {
        cout << val << " is even.\n"; 
    }
    else
        cout << val << " is odd\n";

    return 0;
}

/*********************
 * Name: bool isEven(int);
 * Discription: tests if int argument
 *              recieved is odd or even 
 * input: int
 * output: bool
 * **********************/
bool isEven(int number)
{
    if(number % 2 == 0)
    {
        return true;
    }
    else
        return false;
}