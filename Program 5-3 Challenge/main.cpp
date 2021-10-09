/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 7th, 2021
** Description:  This program asks the user for the speed of a vehicle on mph and 
*                how mnay hours it has traveled. 
*******************************************************************************/ 
#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    double distance,
           speed,
           time;
    double total = 0.0;
    cout << "What is the speed of the vehicle in mph?" << endl;
    cin >> speed;
    cout << "How many hours has it travled?" << endl;
    cin >> time;
    cout << "Hour           Miles Traveled\n";
    cout << "-----------------------------\n";
    for (int i = 1; i <= time; i++)
    {
        /* code */
        distance = speed * i;
        cout << i << "               " << distance << endl;
    }
    
    return 0;
}