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
    //string object that holds the model of the car
    std::string model;
    //holds the cars current speed
    int speed;
public:
    //constructor
    Car();
    Car(int yr, std::string mk, std::string mod);
    //setters
    void setYear(int);
    void setMake(std::string);
    void setModel(std::string);
    void setSpeed(int);
    //getters
    int getYear();
    std::string getMake();
    std::string getModel();
    int getSpeed();
    //accelerate function that adds five to the speed member
    void addSpeed();
    //brake function that subtracts 5 from speed member variable each time is called
    void subSpeed();

};


#endif
