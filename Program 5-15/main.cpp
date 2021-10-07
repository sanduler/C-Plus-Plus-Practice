/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 6th, 2021
** Description:  This program calculates DVD rental charges where every third DVD is 
**               free. It illustrates the use of the continue statement.
*******************************************************************************/ 
#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::showpoint;
using std::setprecision;

int main()
{
    //variables
    int numDVDs;            //number of DVDs being rented
    double total = 0.0;     //accumulates total charges for all DVDs
    char current;           //current release Yes/No

    //Print Statements
    //get the number of DVDs rented
    cout << "How many DVDs are being rented? ";
    cin >> numDVDs;

    //determine the charges
    for (int dvdCount = 0; dvdCount <= numDVDs; dvdCount++)
    {
        /* code */
        if (dvdCount % 3 == 0)  //If its a 3rd dvd its free
        {
            /* code */
            cout << "DVD #" << dvdCount << " is free!\n";
            continue;
        }
        cout << "DVD #" << dvdCount << " a current release (Y/N)? ";
        cin >> current; 
        if ((current == 'Y') || (current == 'y'))
        {
            /* code */
            total += 3.50;
        }
        else
        {
            total += 2.50;
        }
    }
    //Displays the total charges
    cout << fixed << showpoint << setprecision(2);
    cout << "The total is $" << total << endl;
    return 0;
}