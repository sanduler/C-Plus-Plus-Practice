//This program determines whether or not an applicant
// qualifies for a loan. It uses the ! opereator 
// to reverse the logic of the if statment.

#include <iostream>
using namespace std;

int main()
{
    const double MIN_INCOME = 35000.00;
    const int MIN_YEARS = 5;

    //Anual income
    double income;

    //years at the current job 
    int years;

    //get anula income and years on the job
    cout << "What is your annual income? " << endl;
    cout << "Income: $";
    cin >> income;

    cout << endl;
    cout << "How many years have you worked at the current job?" << endl;
    cout << "Years: ";
    cin >> years;

    //determine if the applicant qualifies for a loan
    if(!(income >= MIN_INCOME || years > MIN_YEARS))
    {
        cout << "\nYou must earn at least $" << MIN_INCOME;
        cout << " or have been employed \n";
        cout << "for more than " << MIN_YEARS << " years ";
        cout << "to qualify for a loan. \n";
    }
    else 
    {
        cout << "You qualify for a loan!!!\n";
    }

    return 0;

}