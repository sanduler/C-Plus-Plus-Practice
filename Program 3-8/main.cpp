//This program prints a character from its ASCII code
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    //Variables
    int number0 = 62,
        number1 = 55,
        number2 = 33,
        number3 = 99;

    //Dispaly the value of the number variables
    cout << number0 << endl;
    cout << static_cast<char>(number0) << endl;
    cout << number1 << endl;
    cout << static_cast<char>(number1) << endl;
    cout << number2 << endl;
    cout << static_cast<char>(number2) << endl;
    cout << number3 << endl;
    cout << static_cast<char>(number3) << endl;

    return 0;
}