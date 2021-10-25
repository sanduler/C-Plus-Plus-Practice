/* *******************************************************************************
 * Name: Ruben Sanduleac
 * Date: October 24th, 2021
 * Description: This client program uses the Account class to perform simple
 *              banking operations. This file should be combined into a project
 *              along with the Account.h and Account.cpp files.
 * ******************************************************************************/
#ifndef ACCOUNT_H
#define ACCOUNT_H


class Account {
private:
    double balance;
    double intRate;
    double interest;
    int transactions;
public:
    //general constructor
    Account(double rate = 0.045, double bal = 0.0);

    //function helpers/setters
    void makeDeposit(double);
    bool withdraw(double);
    void calcInterest();

    //getters
    double getBalance();
    double getInterest();
    int getTransactions();

};


#endif ACCOUNT_H
