/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 17th, 2021
** Description:  Thi s program implements a Rectang le class.
*******************************************************************************/ 
#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;

//Rectangle class declaration.
class Rectangle
{
private:
    /* private memebers */
    double length;
    double width;
public:
    Rectangle(/* args */);
    ~Rectangle();
    void setLength(double);
    void setWidth(double);
    double getLength();
    double getWidth();
    double calcArea();
    double calcParameter();

};

//Constructor
Rectangle::Rectangle(/* args */)
{

}

//destructor
Rectangle::~Rectangle()
{

}

void Rectangle::setLength(double len)
{
    if (len >= 0.0)
    {
        /* code */
        length = len;
    }
    else
    {
        length = 1.0;
        cout << "Invalid!! set to default of 1.0" << endl;
    }
    
}

void Rectangle::setWidth(double wid)
{
    if (wid >= 0.0)
    {
        width = wid;
    }
    else
    {
        width = 1.0;
        cout << "Invalid!! set to default of 1.0" << endl;
    }
}

double Rectangle::getLength()
{
    return length;
}

double Rectangle::getWidth()
{
    return width;
}

double Rectangle::calcArea()
{
    return length * width;
}

double Rectangle::calcParameter()
{
    return ((2*length) + (2*width));
}

int main()
{
    Rectangle rectangle1; 
    double boxLength, boxWidth;


    cout << "This program will calcualte the area of a rectangle.\n";
    cout << "What is the length? ";
    cin >> boxLength;

    cout << "What is the width? ";
    cin >> boxWidth;

    rectangle1.setWidth(boxWidth);
    rectangle1.setLength(boxLength);

    cout << "\nHere is the rectangle's data:\n";
    cout << "Length: " << rectangle1.getLength() << endl;
    cout << "Width: " << rectangle1.getWidth() << endl;
    cout << "Area: " << rectangle1.calcArea() << endl;
    cout << "Parameter: " << rectangle1.calcParameter() << endl;

    return 0;
}