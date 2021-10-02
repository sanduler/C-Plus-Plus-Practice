/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 11th, 2021
** Description:  This program calculates the number of soccer teams a youth
**               league can careate froom the number of a valuble players. It perfroms input
**               validation using while loops.
*******************************************************************************/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    //constants for the program for min and max players
    const int MIN_PLAYERS = 2,
              MAX_PLAYERS = 15;

    //varibles for the program
    int players,
        teamSize,
        numTeams,
        leftOver;

    cout << "How many players do you wish per team\n";
    cout << "(Enter a value in the range " << MIN_PLAYERS << " - " << MAX_PLAYERS << "): ";
    cin >> teamSize;  

    //validate the input from the user
    while(teamSize < MIN_PLAYERS || teamSize > MAX_PLAYERS)
    {
        cout << "\nTeam size should be " << MIN_PLAYERS << " to " << MAX_PLAYERS << " players. \n";
        cout << "How many players do you wish per team? ";
        cin >> teamSize; 
    }   
    //get and validate the number of players avalible
    cout << "\nHow manu players are avalible? ";
    cin >> players;
    
    //checks if the number is possitive
    while (players <= 0)
    {
        cout << "Please enter a possitive number: ";
        cin >> players;
    }

    //calculate the number of teams and number of leftover players
    numTeams = players / teamSize;
    leftOver = players % teamSize;

    //dispay the results 
    cout << "\nThere will be " << numTeams << " teams with ";
    cout << leftOver << " players left over without a team.\n";

    return 0;
}