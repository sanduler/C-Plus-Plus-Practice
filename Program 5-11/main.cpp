/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 5th, 2021
** Description:  This program is a menu driven Health Club membership program carries out the 
**               appropriate actions based on the menu choice entered. A do=while loop 
**               allows the program to repeat until the user selects menu choice 4.
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
    //constants
    const double ADULT_RATE = 120.0;
    const double CHILD_RATE = 60.0;
    const double SENIOR_RATE = 100.0;

    //variables
    //menu choice
    int choice,
    
    //number if months
        months;
    
    //monly charges
    double charges;

    do
    {
        //display the menu and get the users choice 
        cout << "\n Health Club Membership Menu \n\n";
        cout << "1. Standart Adult Membership\n";
        cout << "2. Child Membership\n";
        cout << "3. Senior Citizen Membership\n";
        cout << "4. Quit the program\n\n";
        cout << "Enter you choice: ";
        cin >> choice;
        /* code */

        //validate menu selection
        while ((choice < 1) || (choice > 4))
        {
            cout << "Please enter 1, 2, 3, or 4: ";
            cin >> choice;
        }
        //proces the users chocie
        if (choice !=4)
        {
            /* code */
            cout << "For how many months? ";
            cin >> months;

           switch (choice)
           {
            case 1:
               charges = months * ADULT_RATE;
               break;
            case 2:
                charges = months *CHILD_RATE;
                break;
            case 3:
                charges = months * SENIOR_RATE;
                break;
            default:
                break;
           }

           //display the monethly charges
           cout << fixed << showpoint << setprecision(2);
           cout << "The total charges are $" << charges << endl;   
        }
        
    } while (choice != 4);
    
    return 0;
}