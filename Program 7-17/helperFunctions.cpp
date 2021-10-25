/* *******************************************************************************
 * Name: Ruben Sanduleac
 * Date: October 24th, 2021
 * Description: This client program uses the Account class to perform simple
 *              banking operations. This file should be combined into a project
 *              along with the Account.h and Account.cpp files.
 * ******************************************************************************/
#include "helperFunctions.h"
/******************************************
 * Name: displayMenu()
 * Description: This function displays the user's
 *              menu on the screen.
 *****************************************/
void displayMenu()
{
    std::cout << std::endl << std::endl;
    std::cout << ""            "MENU\n\n";
    std::cout << "1) Display the account balance\n";
    std::cout << "2) Display the number of transactions\n";
    std::cout << "3) Display interest earned for this period\n";
    std::cout << "4) Make a deposit\n";
    std::cout << "5) Make a withdrawal\n";
    std::cout << "6) Add interest for this period\n";
    std::cout << "7) Exit the program\n\n";
    std::cout << "Enter your choice: ";
}

/******************************************
 * Name: char getChoice(char max)
 * Description: 1. get the choice from the user
 *              2. ignore \n
 *              3. use a while loop to check the users
 *                  choice.
 *              4. if the choice is not valid the user
 *                  reenters the choice.
 *              5. returns back the choice.
 *****************************************/
char getChoice(char max)
{
    char choice = std::cin.get();
    std::cin.ignore(); //bypass the '\n' in the input buffer

    while (choice < '1' || choice > max)
    {
        std::cout << "Choice must be between 1 and " << max << ". ";
        std::cout << "Please re-enter choice: ";
        choice = std::cin.get();
        std::cin.ignore();
    }
    return choice;
}

/******************************************
 * Name: void makeDeposit(Account &account)
 * Description: This function accepts a reference
 *              to an Account object. The user is
 *              prompted for the dollar amount of the
 *              deposit, and the makeDeposit member
 *              of the Account object is then called.
 *****************************************/
void makeDeposit(Account &account)
{
    double dollars;

    std::cout << "Enter the amount of the deposit: ";
    std::cin >> dollars;
    std::cin.ignore();
    account.makeDeposit(dollars);
}

/******************************************
 * Name: void withdraw(Account &account)
 * Description: This function accepts a reference
 *              ro an Account object. The
 *              user is prompted for the dollar amount of
 *              the withdrawal and the withdraw member of the account
 *              is then called.
 *****************************************/
void withdraw(Account &account)
{
    double dollars;

    std::cout << "Enter the amount of the withdrawal: ";
    std::cin >> dollars;
    std::cin.ignore();
    if (!account.withdraw(dollars))
    {
        std::cout << "ERROR: Withdrawal amount is too large. \n\n";
    }
}