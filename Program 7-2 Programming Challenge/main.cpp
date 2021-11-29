#include <iostream>
#include <string>
#include "Car.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
    Car car1(1994, "Toyota", "Camry");
    car1.addSpeed();

    Car car2;

    car2.setMake("Dodge");
    car2.setModel("Ram");
    car2.setYear(2021);
    car2.setSpeed(10);
    car2.addSpeed();

    cout << car2.getMake() << " " << car2.getModel() << " " << car2.getYear() << " ";
    cout << "I am driving at a speed of " << car2.getSpeed() << endl;

    return 0;
}
