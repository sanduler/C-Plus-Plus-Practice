/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 17th, 2021
** Description:  This program shows how to use the constructor
*******************************************************************************/ 
#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;

class Demo
{
private:
    /* data */
public:
    Demo(/* args */);
    ~Demo();
};

Demo::Demo(/* args */)
{
    cout << "Now the constructor is running!" << endl;
}

Demo::~Demo()
{
}

int main()
{
    cout << "This is displayed before the object is created \n";

    Demo demoObj;

    cout << "This is displayed after the object is created.\n";
    return 0;
}