/*********************************************
 * Name: Ruben Sanduleac
 * Date: November 20th, 2021
 * Description:
 * ******************************************/
#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H


class PatientAccount {
private:
    double charges;
    double days;
    double rate;
    double cost;
public:
    //constructor
    PatientAccount();
    //setters
    void setCharge(double);
    void setDays(double);
    void setRate(double);
    void setCost(double);
    //getters
    double getCharges();
    double getDays();
    double getRate();
    double getCost();
};


#endif
