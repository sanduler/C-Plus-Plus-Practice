/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 18th, 2021
** Description:  Thiis program implements a circle
*******************************************************************************/ 
#include <iostream>
#include <iomanip>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

//Circle class declaration
class Circle
{
private:
    /* data */
    double radius;
public:
    Circle(/* args */);
    void setRadius(double);
    double calcArea();
    ~Circle();
};

Circle::Circle(/* args */)
{
    radius = 1.0;
}

Circle::~Circle()
{
}
void Circle::setRadius(double rad)
{
    if (rad >= 0.0)
    {
        radius = rad;
    }
    
}
double Circle::calcArea()
{
    return (3.14*pow(radius, 2));
}

int main()
{
    Circle circle1;
    Circle circle2;
    double radius;

    cout << "Please enter a disered radius: ";
    cin >> radius;
    circle2.setRadius(radius);

    cout << "The area of a circle1 is " << circle1.calcArea() << endl;
    cout << "The area of a circle2 is " << circle2.calcArea() << endl;

    return 0;
 
}