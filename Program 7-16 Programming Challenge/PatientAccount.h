/*********************************************
 * Name: Ruben Sanduleac
 * Date: November 20th, 2021
 * Description:
 * ******************************************/
#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H
#include "Surgery.h"
#include "Pharmacy.h"

class PatientAccount {
private:
    double charges;
    double days;
    double rate;
    double cost;

    //use the classes to send back the info
    Surgery cost1;
    Pharmacy cost2;


public:

    //constructor
    PatientAccount();

    //overloaded constructor
    PatientAccount(double, double, int);

    //setters
    void setCharge(double);
    void setDays(double);
    void setRate(double);
    void setCost(double);

    //set both surgeries and pharmacy charges
    void setSurgeryCharges(int choice);
    void setPharmacyCharges(int choice);

    //getters
    double getCharges();
    double getDays();
    double getRate();
    double getCost();
};


#endif
