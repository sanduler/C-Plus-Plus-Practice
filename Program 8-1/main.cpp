/*
 *   Name:Ruben Sanduleac
 *   Data: 1/1/22
 *   Discription: This program stores employees work hours in an int array
 *                A for loop is used to store the values inside and read them.
 */

#include <iostream>
using namespace std;

int main()
{
    const int NUM_EMP = 6;
    int hours[NUM_EMP]; // holds hours worked for 6 employees
    int count;

    // input the hours worked by each emploloyee
    cout << "Enter the hours worked by " << NUM_EMP << " employees: " << endl;
    for (int count = 0; count <= NUM_EMP; count++)
    {
        cout << "Hours: ";
        cin >> hours[count];
    }

    // display the contents of the array
    for (int count = 0; count <= NUM_EMP; count++)
    {
        cout << "The hours you entered are: ";
        cout << " " << hours[count] << endl;
    }
}