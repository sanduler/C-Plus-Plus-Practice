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
    std::cout << "1) Display the account balance\n";
    std::cout << "2) Display the number of transactions\n";
    std::cout << "3) Display interest earned for this period\n";
    std::cout << "4) Make a deposit\n";
    std::cout << "5) Make a withdrawal\n";
    std::cout << "6) Add interest for this period\n";
    std::cout << "7) Exit the program\n\n";
    std::cout << "Enter your choice: ";
}
char getChoice(char)
{
    char choice = std::cin.get();
    std::cin.ignore(); //bypass the '\n' in the input buffer

    while ()

}
void makeDeposit(Account &)
{

}
void withdraw(Account &)
{

}