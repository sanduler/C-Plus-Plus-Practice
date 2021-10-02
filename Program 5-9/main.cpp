/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 10th, 2021
** Description:  This program illustrates the use of an end sentinel. It calculates
**               the total number of points a soccer team has earned over a series 
**               of games. The user enters the poi nt values, then - 1 when finished .
*******************************************************************************/ 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    //variables
    int game  = 1,
        points,
        total = 0;

    //read in the points for game 1
    cout << "Enter the number of points your team has earned\n";
    cout << "so far this season. Then enter -1 when finished. \n\n";
    cout << "Enter the points for game " << game << ": ";
    cin >> points; 

    //Loop as ling as the end sentinel has not yet been entered
    while (points != -1)
    {
        //Add points just read in to the accumulator
        total += points;

        //enter the points for the next game
        game++;
        cout << "Enter the points for game " << game << ": ";
        cin >> points;
    }
    //display the total points
    cout << "\nThe total points are " << total << endl;

    return 0;
}