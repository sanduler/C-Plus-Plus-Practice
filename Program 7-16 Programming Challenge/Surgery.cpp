/*********************************************
 * Name: Ruben Sanduleac
 * Date: November 20th, 2021
 * Description:
 * ******************************************/
#include "Surgery.h"

Surgery::Surgery()
{
    armSurgery = 2333.81;
    legSurgery = 8455.11;
    hipSurgery = 12999.46;
    kneeSurgery = 9822.63;
    neckSurgery = 3566.28;
}

double Surgery::getArmSurgery()
{
    return armSurgery;
}

double Surgery::getLegSurgery()
{
    return legSurgery;
}

double Surgery::getHipSurgery()
{
    return hipSurgery;
}

double Surgery::getKneeSurgery()
{
    return kneeSurgery;
}

double Surgery::getNeckSurgery()
{
    return neckSurgery;
}
