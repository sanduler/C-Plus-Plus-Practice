/*********************************************
 * Name: Ruben Sanduleac
 * Date: November 20th, 2021
 * Description:
 * ******************************************/
#ifndef PHARMACY_H
#define PHARMACY_H


class Pharmacy {
private:
    double Anxiety,
           painKillers,
           Morphine,
           Vitamins,
           aminoAcids;
public:
    Pharmacy();
    double getAnxiety();
    double getpainKillers();
    double getMorphine();
    double getVitamins();
    double getaminoAcids();
};


#endif
