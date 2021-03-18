//This program calculates the current balance
//in a bank account.

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
    int loop;

    loop = 1;

    while(loop != 0)
    {
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

        cout << "The account Balance is $" << Total << endl << endl;
        cout << "Do you want to run the program again?" << endl;

        cout << "Enter the number " << endl;
        cout << "1. Run the Program " << endl;
        cout << "0. Exit " << endl;
        cin >> loop;
        if(loop == 0)
        {
            break;
        }
    }
    cout << "Thank you for using the program" << endl;
    return 0;
}