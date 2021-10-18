/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 17th, 2021
** Description:  Simple Class
*******************************************************************************/ 
#include <iostream>
#include <iomanip>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

class Circle
{
private:
    /* data */
    double radius;
public:
    Circle(/* args */);
    ~Circle();
    void setRadius(double r);
    double calcArea();
};

//constructor
Circle::Circle(/* args */)
{
}

//distructor
Circle::~Circle()
{
}

//setter
void Circle::setRadius(double r)
{
    radius = r;
}

//getter
double Circle::calcArea()
{
    return (3.14 * pow(radius, 2));
}
int main()
{
    Circle circle1, circle2;

    //call the setRadius function for each circle
    circle1.setRadius(1);
    circle2.setRadius(2.5);

    //call calcArea
    cout << "The area of the circle1 is " << circle1.calcArea() << endl;
    cout << "The area of the circle2 is " << circle2.calcArea() << endl;

    return 0; 
}