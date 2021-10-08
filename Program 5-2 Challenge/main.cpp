/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 6th, 2021
** Description:  This program asks the user for a posstive integer value and that uses a loop to 
*                to validate the input. The program should then use a second loop to compute the sum
*                of all integers from 1 up to the number entred. For exemple if the user enters 50,
*                the loop will find the sum of 1, 2, 3, 4, 5,..50.
*******************************************************************************/ 
#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    //Variables
    int number;             //integer entered by the user
    int total = 0;          //counter to hold the total


    //Start message
    cout << endl;
    cout << "*****************************************************************" << endl;
    cout << "This program sums all the numbers up to the one entered" << endl;
    cout << "*****************************************************************" << endl;
    cout << endl;

    cout << "Please enter a posstive integer: \n";
    cin >> number;

    while (number < 0)
    {
        /* code */
        cout << "Please enter a posstive integer: \n";
        cin >> number;
    }

    do
    {
        total += number;
        number--;
        /* code */
    } while (number != 0);
    
    cout << "The sum of all the numbers is: " << total << ".";
    return 0;
}