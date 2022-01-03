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
    string name[NUM_MONTHS] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "Novemeber", "December"};

    int days[NUM_MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int month = 0; month < NUM_MONTHS; month++)
    {
        /* code */
    }

    return 0;
}