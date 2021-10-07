/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 6th, 2021
** Description:  This program writes data to a file. Checks to see if the file is 
**               there or missing.
*******************************************************************************/ 
#include <iostream>
#include <fstream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ofstream;
using std::ifstream;

int main()
{
    ifstream inputFile;
    string fileName;
    int number; 
    char run = 'Y';

    do
    {
        cout << "Enter the file name that you would like to open: ";
        cin >> fileName;

        //Attempt to open the input file
        inputFile.open(fileName);

        if (inputFile)
        {
            /* code */
            while (inputFile >> number)
            {
                /* code */
                cout << number << endl;
            }
            //Close the file
            inputFile.close();
        }
        else
        {
            cout << "Error opening the file " << endl;
        }
            /* code */

        cout << "Would you like to run again? Enter 'Y' for Yes and 'N'for No: ";
        cin >> run;
    } 
    while (run == 'Y' || run == 'y');
    return 0;
}