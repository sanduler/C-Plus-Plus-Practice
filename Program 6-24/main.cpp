/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 15th, 2021
** Description:  This program uses 2 functions: a void functions with a reference
**               variable as a parameter, and a value-returning function.
*******************************************************************************/ 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//fxn prototypes
void getNum(int &);
int doubleNum(int);

int main()
{
    int value;

    //call getNum to ge the number and store it in value
    getNum(value);

    //Call doubleNum passing it the number stored in value 
    //Assign value the number returned by the function
    value = doubleNum(value);

    cout << "That value doubled is " << value << endl;
    return 0;
}   

void getNum(int &userNum)
{
    cout << "Enter a number: ";
    cin >> userNum;
}

int doubleNum(int number)
{
    return number * 2;
}