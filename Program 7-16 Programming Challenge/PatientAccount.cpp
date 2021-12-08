/*********************************************
 * Name: Ruben Sanduleac
 * Date: November 20th, 2021
 * Description: Patient class used to take the
 *              info for each of the patient
 *              and return the computed total.
 * ******************************************/
#include "PatientAccount.h"

/*********************************************
 * Name: PatientAccount::PatientAccount()
 * Description: The constructor initializes the patient
 *              at day 1 and $0 charges. The rate
 *              of charges is $1000/day.
 * ******************************************/
PatientAccount::PatientAccount()
{
    days = 1;
    charges = 0;
    rate = 1000.00;
}

/*********************************************
 * Name: PatientAccount::PatientAccount(double price, double r, int d)
 * Description: The overloaded constructor initializes the patient
 *              at set cost, rate and day;
 * ******************************************/
PatientAccount::PatientAccount(double price, double r, int d)
{
    cost = price;
    rate = r;
    days = d;
}

/*********************************************
 * Name: void PatientAccount::setCharge(double charg)
 * Description: sets the charge
 * ******************************************/
void PatientAccount::setCharge(double charg)
{
    charges = charg;
}

/*********************************************
 * Name: void PatientAccount::setDays(double da)
 * Description: sets the day
 * ******************************************/
void PatientAccount::setDays(double da)
{
    days = da;
}

/*********************************************
 * Name: void PatientAccount::setRate(double ra)
 * Description: sets the rate
 * ******************************************/
void PatientAccount::setRate(double ra)
{
    rate = ra;
}

/*********************************************
 * Name: void PatientAccount::setCost(double co)
 * Description: sets the cost
 * ******************************************/
void PatientAccount::setCost(double co)
{
    cost = co;
}

/*********************************************
 * Name: void PatientAccount::setCost(double co)
 * Description: set the cost based on users input
 *              uses the Surgery class to return the
 *              value.
 * ******************************************/
void PatientAccount::setSurgeryCharges(int choice)
{
    if (choice == 1)
    {
        charges += cost1.getArmSurgery();
    }
    else if(choice == 2)
    {
        charges += cost1.getHipSurgery();
    }
    else if(choice == 3)
    {
        charges += cost1.getLegSurgery();
    }
    else if(choice == 4)
    {
        charges += cost1.getKneeSurgery();
    }
    else if(choice == 5)
    {
        charges += cost1.getNeckSurgery();
    }
}

/*********************************************
 * Name: void PatientAccount::setPharmacyCharges(int choice)
 * Description: set the cost based on users input
 *              uses the Pharmacy class to return the
 *              value.
 * ******************************************/
void PatientAccount::setPharmacyCharges(int choice)
{
    if (choice == 1)
    {
        charges += cost2.getAnxiety();
    }
    else if(choice == 2)
    {
        charges += cost2.getpainKillers();
    }
    else if(choice == 3)
    {
        charges += cost2.getMorphine();
    }
    else if(choice == 4)
    {
        charges += cost2.getVitamins();
    }
    else if(choice == 5)
    {
        charges += cost2.getaminoAcids();
    }
}

/*********************************************
 * Name: double PatientAccount::getCharges()
 * Description: return the charges
 * ******************************************/
double PatientAccount::getCharges()
{
    return charges;
}

/*********************************************
 * Name: void PatientAccount::setCost(double co)
 * Description: return the days
 * ******************************************/
double PatientAccount::getDays()
{
    return days;
}

/*********************************************
 * Name: void PatientAccount::setCost(double co)
 * Description: return the rate
 * ******************************************/
double PatientAccount::getRate()
{
    return rate;
}

/*********************************************
 * Name: void PatientAccount::setCost(double co)
 * Description: return the cost after computing the
 *              total
 * ******************************************/
double PatientAccount::getCost()
{
    return rate * days + charges;
}

