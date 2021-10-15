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
void getNums(int&, int&);
void orderNums(int&, int&);

int main()
{
    int small, big;

    getNums(small, big);
    orderNums(small, big);

    cout << "The two input numbers orderded from smallest to biggest are ";
    cout << small << " and " << big << endl;

    return 0;
}

void getNums(int& input1, int& input2)
{
    cout << "Enter an integer: ";
    cin >> input1;
    cout << "Enter a second number: ";
    cin >> input2;
}

void orderNums(int& num1, int& num2)
{
    int temp;

    if(num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
}