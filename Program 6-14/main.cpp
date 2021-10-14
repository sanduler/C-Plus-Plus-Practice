/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 13th, 2021
** Description:  This program demonstrates the use of functions that returns true or false.
*******************************************************************************/ 
#include <iostream>
#include <iomanip>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

//prototypes
void displayMenu();
int getChoice();
void showFees(string category, double rate, int months);

int main()
{
    //Constants
    const double ADULT_RATE = 120.0,
                 CHILD_RATE =  60.0,
                 SENIOR_RATE = 100.0;

    int choice, months;

    cout << endl;
    cout << std::fixed << std::showpoint << std::setprecision(2);

    do
    {
        displayMenu();
        choice = getChoice();

        if (choice !=4)
        {
            /* code */
            cout << "For how many months? ";
            cin >> months;
        }
        switch (choice)
        {
            case 1:     showFees("Adult", ADULT_RATE, months);
                        break;
            case 2:     showFees("Child", CHILD_RATE, months);
                        break;
            case 3:     showFees("Senior", SENIOR_RATE, months);
        }
        

        /* code */
    } while (choice !=4);
    
    return 0;
}
/*******************************
 * Name: void displayMenu()
 * Discription: clears the screen and
 *              displays the menu choice.
 * ****************************/
void displayMenu()
{
    system("cls");
    cout << "\n Health Club Membership Menu \n\n";
    cout << "1. Standart Adult Membership\n";
    cout << "2. Child Membership\n";
    cout << "3. Senior Citizen Membership\n";
    cout << "4. Quit the program\n\n";
}

/*******************************
 * Name: int getChoice()
 * Discription: inputs, validats and
 *              returns the users menu choice.
 * ****************************/
int getChoice()
{
    int choice;

    cin >> choice;

    while (choice < 1 || choice > 4)
    {
        /* code */
        cout << "The only valid choices are 1-4. Please re-enter. ";
        cin >> choice;
    }
    return choice;
}

/*******************************
 * Name: void showFees(string category, double rate, int months)
 * Discription: function uses membership type, monthly rate
 *              and number of months passed to it as arguments to
 *              compute and displays a 
 *              members total charges. 
 * ****************************/
void showFees(string category, double rate, int months)
{
    cout << endl;
    cout << "Membership Type : " << category << "        ";
    cout << "Number of months: " << months << endl;
    cout << "Total Charges   : $" << (rate * months) << endl; 

    //hold screen until enter is pressed
    cout << "\nPress the Enter key to return to the menu. ";
    cin.get();
    cin.get();
}