/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 8th, 2021
** Description:  This program displays a table showing the total number of millimeters
*                the ocean will have risen each year for the next 25 years.
*******************************************************************************/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    const double oceanRise = 3.1;       //rise in millimeters
    int years = 1;                          //
    double totalRise = 0;
    while (years < 25)
    {
        /* code */
        totalRise += oceanRise;
        cout << "Year " << years << " Ocean rose " << totalRise << " millimeters\n";
        years +=1;
    }
    
    return 0;
}