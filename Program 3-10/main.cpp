//This program calculates the area of a circle 
//The formula for area od a circle is PI*r^2

#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    //Constant Variables
    const double PI = 3.14159;

    //Variables
    double area,
           radius;
    bool loop = true;

    while(loop)
    { 
        //Program
        cout << "\nThis progoram calcualtes the area of a circle \n" << endl;

        //Get the radius
        cout << "What is the radius of the circle " << endl;
        cin >> radius;

        //Calculate and dispaly the area
        area = PI * pow(radius, 2);

        cout << "The area of a circle is " << area << endl;

        cout << "Do you want to run the program again?\n";
        cout << "Yes = 1\n";
        cout << "No = 0\n";
        cin >> loop;
    }
    return 0;
}