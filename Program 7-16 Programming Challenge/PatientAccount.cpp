/*********************************************
 * Name: Ruben Sanduleac
 * Date: November 20th, 2021
 * Description:
 * ******************************************/
#include "PatientAccount.h"

PatientAccount::PatientAccount()
{

}

PatientAccount::PatientAccount(double price, double r, int d)
{
    cost = price;
    rate = r;
    days = d;
}

void PatientAccount::setCharge(double charg)
{
    charges = charg;
}

void PatientAccount::setDays(double da)
{
    days = da;
}

void PatientAccount::setRate(double ra)
{
    rate = ra;
}

void PatientAccount::setCost(double co)
{
    cost = co;
}

double PatientAccount::getCharges()
{
    return charges;
}

double PatientAccount::getDays()
{
    return days;
}

double PatientAccount::getRate()
{
    return rate;
}

double PatientAccount::getCost()
{
    return cost;
}
