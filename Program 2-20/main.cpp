//This program calculates hourly wages, inclduing overtime
// It uses two arithmetic operators, the addtion operator
// and the multiplication operator.
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    //Base pay rate
    double basePayRate = 20.15;

    //Overtime pay rate
    double overtimePayRate = 27.38; 

    //Ask the user for how many work hours he worked this week
    double workHours;

    //Ask the user for how many overtime hours he work this week
    double overTimeHours;

    //Calculates the regular wages
    double regularWages;

    //Calculates the over time wages
    double overTimeWages;

    //Sums the total wages
    double totalWages;
    cout << "***********************************************"
    cout << "I am your Jarvis you wage calculation assistant" << endl;
    cout << "***********************************************"
    cout << "How many hours did you work this week?" << endl;
    cout << "Hours: ";
    cin >> workHours;

    cout << endl << endl;
    cout << "How many over time hours did you work this week?" << endl;
    cout << "Overtime Hours: ";
    cin >> overTimeHours;50

    cout << endl << endl;
    
    //calculate regualar wages
    regularWages = basePayRate * workHours;

    //calcualte overtime wages
    overTimeWages = overtimePayRate * overTimeHours;

    //calculate total wages
    totalWages = regularWages + overTimeWages;

    cout << "Wages for this week are $" << totalWages << endl;
    cout << "Out of which the regular wages were $" << regularWages << endl;
    cout << "The over time wages were $" << overTimeWages << endl;
}