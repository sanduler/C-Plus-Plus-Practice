/*
 * Name: Ruben Sanduleac
 */
#ifndef CAR_H
#define CAR_H
#include <string>
using std::string;

class Car {
private:
    //an int that holds the cars model year
    int year;
    //string object that holds the make of the car
    std::string make;
    //holds the cars current speed
    int speed;
public:
    //constructor
    Car(int yr, std::string mk);
    //setters
    void setYear(int);
    void setMake(std::string);
    void setSpeed(int);
    //getters
    int getYear();
    std::string getMake();
    int getSpeed();
    //accelerate function that adds five to the speed member
    void addSpeed();
    //brake function that subtracts 5 from speed member variable each time is called
    void subSpeed();

};


#endif
