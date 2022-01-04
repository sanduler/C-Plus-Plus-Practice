/********************************************************************************************
 * Name: Ruben Sanduleac
 * Date: January 3rd, 2022
 * Discription: This program displays the number of days in each
 *              each month. It uses an int array to hold the number of days in each month.
 *              Both are initialized with initilization lists at the tume they are created.
 ********************************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    const int NUM_WORKERS = 5;
    int hours[NUM_WORKERS];
    double payRate;

    // input hours worked by each employee
    cout << "Enter the hours worked by \n";
    for (int worker = 0; worker < NUM_WORKERS; worker++)
    {
        /* code */
        cout << "Employee #" << (worker + 1) << ": ";
        cin >> hours[worker];
    }
    // Input the hourly pay rate for all emplyeee
    cout << "\nEnter the hourly pay rate for all the employees: ";
    cin >> payRate;

    // Display each employees gross pay

    return 0;
}