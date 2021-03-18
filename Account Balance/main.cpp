//This program calculates the current balance
//in a bank acccount.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    double startingBalance;
    double totalDeposit;
    double takeAmount;
    double Total;

    cout << "What is you starting balance on the Account" << endl;
    cout << "$";
    cin >> startingBalance;

    cout << "Thank you for that information" << endl;
    cout << "Next, Please provide me the dollar amount of the current deposit:" << endl;
    cout << "$";
    cin >> totalDeposit;

    cout << "Thank you, finally provide me the dollar amount that will be withdrawn" << endl;
    cout << " and I will calculate the Account Balance. " << endl;
    cout << "$";
    cin >> takeAmount;

    Total = (startingBalance + totalDeposit - takeAmount);

    cout << "The account Balance is $" << Total << endl;
    cout << "Thank you for using the program" << endl;

    return 0;
}