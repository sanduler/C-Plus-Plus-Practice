/*
 *   Name:Ruben Sanduleac
 *   Data: 1/1/22
 *   Discription: This program reads employee work hours from a file and stores
 *                them in an int array. It uses one loop to input the hours and another to
 *                display them.
 */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int NUM_WORK = 5;
    int hours[5];
    int count = 0;

    ifstream datafile;

    // open the data file.
    datafile.open("work.txt");
    if (!datafile)
    {
        // print an error codde
        cout << "Error opening data dile\n";
    }
    else
    {
        // read the numbers from the file into the array. When the prgoram
        //  exits the loop, count variagble will hold the number of items read in.
        while (count < NUM_WORK && datafile >> hours[count])
        {
            /* code */
            count++;
        }
        datafile.close();

        // display the contents of the array
        cout << "The hours worked by each employee are\n";
        for (int employee = 0; employee < count; employee++)
        {
            /* code */
            cout << "Employee " << employee + 1 << ": ";
            cout << hours[employee] << endl;
        }
    }
    return 0;
}