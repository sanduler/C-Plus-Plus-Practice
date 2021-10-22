//This program demonstrates the use of a structure.
#include <iostream>
#include <iomanip>
#include <string>



struct PayRoll
{
    int empNumber;      //Employee number
    std::string name;        //Emplyee number
    double hours;       //hours worked
    double payRate;     //Hourly rate
};

int main()
{
    PayRoll employee;       //emplyee is a payroll structure
    double grossPay;        //Gross amount the emplyee earned this week;

    //get employees data
    std::cout << "Enter the employees number: ";
    std::cin >> employee.empNumber;

    std::cout << "Enter the employees name: ";
    std::cin.ignore();
    getline(std::cin, employee.name);

    std::cout << "Hours worked this week: ";
    std::cin >> employee.hours;

    std::cout << "Employees hourly rate: ";
    std::cin >> employee.payRate;

    grossPay = employee.hours * employee.payRate;


    std::cout << "\nHere is the employees payroll data: \n";
    std::cout << "Name:                  " << employee.name << std::endl;
    std::cout << "Employee Number:       " << employee.empNumber << std::endl;
    std::cout << "Hours worked:          " << employee.hours << std::endl;
    std::cout << "Hourly PayRate         " << employee.payRate << std::endl;
    std::cout << std::fixed << std::showpoint        << std::setprecision(2);
    std::cout << "Gross pay:            $" << grossPay << std::endl;

    return 0;   
}