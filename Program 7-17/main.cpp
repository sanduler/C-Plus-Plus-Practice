/* *******************************************************************************
 * Name: Ruben Sanduleac
 * Date: October 24th, 2021
 * Description: This client program uses the Account class to perform simple
 *              banking operations. This file should be combined into a project
 *              along with the Account.h and Account.cpp files.
 * ******************************************************************************/
#include<iostream>
#include<iomanip>
#include "Account.h"
#include "helperFunctions.h"
using std::cin;
using std::cout;
using std::endl;


int main()
{
    //Max Global Character
    const char MAX_CHOICE = '7';

    //Variables
    Account savings;
    char choice;

    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    do
    {
        displayMenu();
        choice = getChoice(MAX_CHOICE);
        switch (choice)
        {
            case '1': std::cout << "The current balance is $";
                      std::cout << savings.getBalance() << std::endl;
                      break;
            case '2': std::cout << "There have been " << savings.getTransactions() << "transactions.\n";
                      break;
            case '3': std::cout << "Interest earned for this period $" << savings.getInterest() << std::endl;
                      break;
            case '4': makeDeposit(savings);
                      break;
            case '5': withdraw(savings);
                      break;
            case '6': savings.calcInterest();
                      std::cout << "Interest added. \n";
        }
    } while (choice != '7');
    return 0;
}
