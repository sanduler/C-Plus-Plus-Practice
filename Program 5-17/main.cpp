/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 6th, 2021
** Description:  This program writes data to a file.
*******************************************************************************/ 
#include <iostream>
#include <fstream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ofstream;

int main()
{
    ofstream outputFile;
    string name;

    //open the output file
    outputFile.open("Friends.txt");

    //use a loop to get the names of three friends
    //and write each name in the output file
    cout << "Enter the names of three friends. \n";

    for (int i = 1; i <=3; i++)
    {
        /* code */
        cout << "Friend #" << i << ": ";
        cin >> name;
        outputFile << i << ". " << name << endl;
    }
    //Close the file
    outputFile.close();

    cout << "The names were saved to a file.\n";
    return 0;
}