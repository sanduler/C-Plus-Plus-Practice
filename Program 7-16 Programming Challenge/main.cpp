/*********************************************
 * Name: Ruben Sanduleac
 * Date: November 20th, 2021
 * Description:
 * ******************************************/
#include <iostream>
#include <string>
#include <cctype>
#include "PatientAccount.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    int choice,
        days;
    double medical,
           surgery;
    char choice2;
    std::string line;
    line.assign(25, '*');

    PatientAccount invoice;

    do {
        cout << "Hospital Menu" << std::endl;
        cout << line << std::endl;
        cout << "Select the type of the surgery" << endl;
        cout << "1. Arm Surgery" << endl;
        cout << "2. Hip Surgery" << endl;
        cout << "3. Leg Surgery" << endl;
        cout << "4. Knee Surgery" << endl;
        cout << "5. Neck Surgery" << endl;
        cin >> choice;

        //send the type of surgery
        do {
            cout << "Which medication did the patient take? (Enter -1 to exit)" << endl;
            cout << "1. Anxiety Pills " << endl;
            cout << "2. Pain Killer (Tylenol, Advil) " << endl;
            cout << "3. Morphine" << endl;
            cout << "4. Vitamins" << endl;
            cout << "5. Amino Acids" << endl;
            cin >> choice;
        } while (choice != -1);

        cout << "How many days will the patient be at the hospital? " << endl;
        cin >> days;
        invoice.setDays(days);

        cout << endl << " Report " << endl;
        cout << line << endl;
        cout << "Total days at the hospital: " << invoice.getDays() << endl;
        cout << "Hospital daily rate: $" << endl;
        cout << "Total Charges: $" << invoice.getCharges() << endl;
        cout << "Total Cost: $" << endl;

        invoice.setCharge(0);

        cout << "Try for another patient? (Y/N) ";
        cin >> choice2;
        cout << endl << endl;

    }while(std::toupper(choice2) == 'Y');

    return 0;
}