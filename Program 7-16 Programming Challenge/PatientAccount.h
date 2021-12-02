/*********************************************
 * Name: Ruben Sanduleac
 * Date: November 20th, 2021
 * Description:
 * ******************************************/
#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H


class PatientAccount {
private:
    double charges = 0;
    double days = 0;
public:
    //constructor
    PatientAccount();
    //setters
    void setCharge(double);
    void setDays(double);
    //getters
    double getCharges();
    double getDays();
};


#endif
