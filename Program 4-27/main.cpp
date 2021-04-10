// This menu-driven program uses a swtich statement to carry out 
// the appropriate set of actions abased on the users menu choice

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //constatnts
    const double ADULT_RATE = 120.0,
                 CHILD_RATE = 60.0,
                 SENIOR_RATE = 100.0;
    //menu choice and number of months
    int choice,
        months;
    
    //monthly charges
    double charges;

    //display the menu and the users choice
    cout << "   Health Club Membership Menu\n\n";
    cout << "1. Standart Adult Membership\n";
    cout << "2. Child Membership\n";
    cout << "3. Senior Membership\n";
    cout << "4. Quit the program\n\n";
    cout << "Enter your choice: ";
    cin >> choice; 

    //validate
    if (choice >= 1 && choice <= 3)
    {
       cout << "For how many months? ";
       cin >> months;

       //set charges based on users input.
       switch (choice)
       {
            case 1: charges = months * ADULT_RATE;
            break;
            
            case 2: charges =  months * CHILD_RATE;
            break;

            case 3: charges = months * SENIOR_RATE;
            break;
       
            default: cout << "Please run the program again....";
            break;
       }

        cout << fixed << showpoint << setprecision(2);
        cout << "The total charges are $" << charges << endl;
    }
    else if (choice !=4)
    {
        /* code */
        cout << "The valid choices are 1 through 4. \n";
        cout << "Run the program again and select the proper choice" << endl;
    }
                 
    return 0;
}
