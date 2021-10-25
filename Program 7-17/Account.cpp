/* *******************************************************************************
 * Name: Ruben Sanduleac
 * Date: October 24th, 2021
 * Description: This client program uses the Account class to perform simple
 *              banking operations. This file should be combined into a project
 *              along with the Account.h and Account.cpp files.
 * ******************************************************************************/
#include "Account.h"

/*
 * Name: Account::Account()
 * Description: General constructor that takes arguments to initially sorted in the balance.
 */
Account::Account(double rate, double bal)
{
    balance = bal;
    intRate = rate;
    interest = 0.0;
    transactions = 0;
}

/*
 * Name: void Account::makeDeposit(double amount)
 * Description: adds to the balance the amount the user specified
 *              incraments the transactions amount.
 */
void Account::makeDeposit(double amount)
{
    balance += amount;
    transactions++;
}

/*
 * Name: bool Account::withdraw(double amount)
 * Description:uses an if statement to check ifthe
 *             amount withdrawn is larger than the balance if larger retruns
 *             false. Else returns true and subtracts the amount from the balance and
 *             increments the transactions.
 */
bool Account::withdraw(double amount)
{
    if (balance < amount)
    {
        return false;
    }
    else
    {
        balance -= amount;
        transactions++;
        return true;
    }
}

/*
 * Name: void Account::calcInterest()
 * Description: takes the current balance and multiplies the intrest
 *              by the current balance then adds it to the balance.
 */
void Account::calcInterest()
{
    interest = balance * intRate;
    balance +=interest;
}

/*
 * Name: double Account::getBalance()
 * Description: returns the balance back.
 */
double Account::getBalance()
{
    return balance;
}

/*
 * Name: double Account::getInterest()
 * Description: returns the interest back.
 */
double Account::getInterest()
{
    return interest;
}

/*
 * Name: int Account::getTransactions()
 * Description: returns the # of transactions back.
 */
int Account::getTransactions()
{
    return transactions;
}
