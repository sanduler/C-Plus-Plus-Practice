/*
 * Name: Ruben Sanduleac
 */
#include "Car.h"
Car::Car(int yr, std::string mk, std::string mod)
{
    year = yr;
    make = mk;
    model = mod;
    speed = speed;
}

void Car::setYear(int yr)
{
    year = yr;
}

void Car::setMake(std::string mak)
{
    make = mak;
}

void Car::setSpeed(int sp)
{
    speed = sp;
}

int Car::getYear()
{
    return year;
}

std::string Car::getMake()
{
    return make;
}

int Car::getSpeed()
{
    return speed;
}

void Car::addSpeed()
{
    speed = speed+5;
}

void Car::subSpeed()
{
    if(speed >= 0)
    {
        speed = speed - 5;
    }
}

Car::Car()
{
    speed = 0;
}

void Car::setModel(std::string modl)
{
    model = modl;
}

std::string Car::getModel()
{
    return model;
}
