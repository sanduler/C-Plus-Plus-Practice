/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 17th, 2021
** Description:  Using a static Variable 
*******************************************************************************/ 
#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;

int square(int);
double square(double);

int main()
{
    int userInt;
    double userReal;

    cout << "Enter an integer and a floating - point value: ";
    cin >> userInt >> userReal;


    //display their squares
    cout << "Here are their squares: ";
    cout << std::fixed << std::showpoint << std::setprecision(2);
    cout << square(userInt) << " and " << square(userReal) << endl;

    return 0;
}

int square(int)
{

}
double square(double)
{
    
}
