/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 6th, 2021
** Description:  This program uses a loop to display the characters for each ASCII
**               code 32 through 127. Display 16 charachers on each line with
**               one space between charecters.
*******************************************************************************/ 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    //Variables
    char ASCII;

    //Start message
    cout << endl;
    cout << "*****************************************************************" << endl;
    cout << "This program displays ASCII from 32 to 127 with 16 on each line. " << endl;
    cout << "*****************************************************************" << endl;
    cout << endl;

    //loop through each ASCII
    for (int i = 32; i <= 127; i++)
    {
        ASCII = i;
        cout << ASCII << " ";
        if (i % 16 == 0)
        {
            //Display 16 charachers on each line with
            //one space between charecters.
            cout << endl;
        }
        
    }
    cout << endl;
    cout << endl;
    cout << "*****************************************************************" << endl;
    cout << "Thank you for using the program" << endl;
    cout << "*****************************************************************" << endl;
    cout << endl;
    
    return 0;
}