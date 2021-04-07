//This menu driver program ises an if else statment to carry put the correct set of actions based 
// on the users menu choice. 

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //constats for membersji[
    const double ADULT_RATE = 120.0;
    const double CHILD_RATE =  60.0;
    const double SENIOR_RATE = 100.0;

    int choice;
    int months;
    double charges;

    //Display the munu and get the users choice 

    cout << " Health Club Membership Menu \n\n";
    cout << "1. Standart Adult Membership\n";
    cout << "2. Child Membership\n";
    cout << "3. Senior Membership \n";
    cout << "4. Quit the program\n";
    cout << " Enter you choice:  ";
    cin >> choice;

    cout << fixed << showpoint << setprecision(2);

    if (choice == 1)
    {
        cout << " For how many months? ";
        cin >> months;
        charges = months * ADULT_RATE;
        cout << "\n The total charges are $" << charges << endl;
    }
    else if(choice == 2)
    {
        cout << " For how many months? ";
        cin >> months;
        charges = months * CHILD_RATE;
        cout << "\n The total charges are $" << charges << endl;
    }
    else if (choice == 3)
    {
        cout << " For how many months? ";
        cin >> months;
        charges = months * SENIOR_RATE;
        cout << "\n The total charges are $" << charges << endl;
    }
    else if (choice != 4)
    {
        cout << "\n The valid choices are 1 through 4 \n";
        cout << "\nRun the program and try again!\n";
    }
    return 0;
}