/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 6th, 2021
** Description:  This program writes data to a file.
*******************************************************************************/ 
#include <iostream>
#include <fstream>
using std::cout;
using std::cin;
using std::endl;
using std::ofstream;

int main()
{
    //file variable
    ofstream outputFile;

    //open the output file
    outputFile.open("demofile.txt");

    cout << "Now writting data to the file\n";
    
    //Write four names to the file
    outputFile << "Bach\n";
    outputFile << "Beethoven\n";
    outputFile << "Mozart\n";
    outputFile << "Schubert\n";

    //Close file
    outputFile.close();

    cout << "Done.\n";
    return 0;
}