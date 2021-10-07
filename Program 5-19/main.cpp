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
using std::ifstream;

int main()
{
    ifstream inputFile;     //File stream object
    string fileName;        //Holds the user entered file name
    int numValues;          //Number of values to read;
    double value;           //a single value read
    double total = 0.0;      //Accumulator

    //propt the user to enter the data file name
    cout << "This program reads and sums the value in a data file. \n";
    cout << "Enter the name of the file to read from: ";
    cin >> fileName;

    // Get the number values to read
    cout << "How many values are stored in your file? ";
    cin >> numValues;

    //open the input file
    inputFile.open(fileName);

    //Loop once for each piece of data to read
    for (int count = 1; count <= numValues; count++)
    {
        /* code */
        //read a value from the file and add it to the sum
        inputFile >> value;
        total += value;
    }
    cout << "\nThe total of the " << numValues << " values is ";
    cout << total << endl;

    //close the file
    inputFile.close();
    
    return 0;
}