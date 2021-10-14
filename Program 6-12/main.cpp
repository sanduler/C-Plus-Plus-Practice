/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 13th, 2021
** Description:  This program demonstrates two values returning functions. The
*                square functions is called in a mathmatical statement.
*******************************************************************************/ 
#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;

//function prototypes
double getRadius();
double square(double number);


int main()
{
    const double PI = 3.14159;          //constant for PI
    double radius,                      //holds the circles radius
           area;                        //holds the circles area

    //set the numeric output formating
    cout << std::fixed << std::showpoint << std::setprecision(2);

    cout << endl; 
    
    //get the radius of the circle
    cout << "This program calculates the area of a circle.\n";
    radius = getRadius();

    //calculate the area of the circle
    area = PI * square(radius);

    cout << "The area is " << area << endl;

    return 0;
}

/************************************************************
 * Name: getRadius()
 * Discription: The function returns the circle radius input
 *              by the user.
 * Output: double, rad
 * **********************************************************/
double getRadius()
{
    double rad;
    cout << "Enter the radius of the circle: ";
    cin >> rad;
    return rad;
}

/************************************************************
 * Name: double square(double number);
 * Discription: The function returns the square of the radius
 * Output: double, number
 * **********************************************************/
double square(double number)
{
    return number * number;
}