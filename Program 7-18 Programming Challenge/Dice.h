/*
 * Name: Ruben Sanduleac
 * Date: 1/1/22
 */
#ifndef DICE_H
#define DICE_H


class Dice {
private:
    int numberOfSides;
    int currRoll;
public:
    Dice(int sides = 6);
    void roll();

    //getters
    int const getRoll();

};


#endif
