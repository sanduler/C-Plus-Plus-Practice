// This program calcualtes the number of soccer teams a 
// youth league can create from the number of availible
// players. It perfroms input validation using a while loops

#include <iostream>
using namespace std;

int main()
{
    const int MIN_PLAYERS = 9,
              MAX_PLAYERS = 15;
    
    int players,        //Number of availible players
        teamSize,       //Number of desired players per team
        numTeams,       //Number of teams
        leftOver;       //Number of players left over.

    //Get the number of players per team
    cout << "How manu players do you wish per team?\n";
    cout << "(Enter a value in the range ";
    cout << MIN_PLAYERS << " - " << MAX_PLAYERS << "): " << endl;
    cout << "Team Size: " <<;
    cin >> teamSize;


    //validate the input
    while(teamSize < MIN_PLAYERS || teamSize > MAX_PLAYERS)
    {
        cout << 
    }
}