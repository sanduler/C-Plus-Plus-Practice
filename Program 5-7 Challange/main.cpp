/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 8th, 2021
** Description:  This program calculates the area of a circle starting with a radius
**               1 and doubling to a radius of 256
*******************************************************************************/
#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    const double PI = 3.14;
    int radius = 1;
    double area;
    while (radius <= 256)
    {
        area =  PI * (pow(radius, 2));
        cout << "Radius: " << radius << " Area: " << area << endl;
        radius = radius * 2;
        /* code */
    }
    
    return 0;
}