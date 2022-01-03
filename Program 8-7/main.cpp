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
    const int NUM_MONTHS = 12;
    int choice;
    string name[NUM_MONTHS] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "Novemeber", "December"};

    int days[NUM_MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cout << "This program will tell you how many days are in any month. " << endl;

    // Display the months
    for (int months = 1; months < NUM_MONTHS; months++)
    {
        /* code */
        cout << setw(2) << months << "  " << name[months - 1] << endl;
    }

    cout << "\nEnter the number of the month you want: ";
    cin >> choice;

    if (choice >= 13 && choice < 0)
    {
        /* Validate the input */
        cout << "\nEnter the number of the month you want: ";
        cin >> choice;
    }

    // Use the hoice the user entered to get the name of
    // the month and its number of days from the arrays.
    cout << "The month of " << name[choice - 1] << " has ";
    cout << days[choice - 1] << " days.\n";

    return 0;
}