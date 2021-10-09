/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 7th, 2021
** Description:  This program displaus a table of speed in kilometers per hour with
*                their values converted to miles per hour. The table displays the speeds from
*                40 kilometers per hour through 120 kilometers per hour and increments
*                by 10 kilometer per hour.
*******************************************************************************/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    const double ratio = 0.6214;
    double kilo = 40;
    double miles;

    while (kilo < 130)
    {
        /* code */
        miles = kilo * ratio;
        cout << kilo << " kilometers" << " is equavalent to " << miles << " miles " << endl;
        kilo += 10;
    }
    
    return 0;
}
