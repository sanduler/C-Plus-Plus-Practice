/* *******************************************************************************
 * Name: Ruben Sanduleac
 * Date: October 24th, 2021
 * Description: This client program uses the Account class to perform simple
 *              banking operations. This file should be combined into a project
 *              along with the Account.h and Account.cpp files.
 * ******************************************************************************/
#ifndef HELPERFUNCTIONS_H
#define HELPERFUNCTIONS_H
#include <iostream>
#include "Account.h"

//Helper functions used in the main
void displayMenu();
char getChoice(char);
void makeDeposit(Account &);
void withdraw(Account &);

#endif
