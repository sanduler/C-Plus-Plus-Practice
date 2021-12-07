/*********************************************
 * Name: Ruben Sanduleac
 * Date: November 20th, 2021
 * Description:
 * ******************************************/
#ifndef SURGERY_H
#define SURGERY_H
#include "PatientAccount.h"


class Surgery {
private:
    double armSurgery,
           legSurgery,
           hipSurgery,
           kneeSurgery,
           neckSurgery;
public:
    Surgery();
    double getArmSurgery();
    double getLegSurgery();
    double getHipSurgery();
    double getKneeSurgery();
    double getNeckSurgery();
};

#endif
