//This program demonstrates the use of a structure.
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct PayRoll
{
    int empNumber;      //Employee number
    string name;        //Emplyee number
    double hours;       //hours worked
    double payRate;     //Hourly rate
};

int main()
{
    PayRoll employee;       //emplyee is a payroll structure
    double grossPay;        //Gross amount the emplyee earned this week;

    //get employees data
    cout << "Enter the employees number: ";
    cin >> employee.empNumber;
}