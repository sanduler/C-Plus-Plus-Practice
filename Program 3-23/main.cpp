//This program displays the isers name surrounded by the stars
//It uses the + operator and several string class member functions.

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string firstName,
           lastName,
           fullName,
           cityState,
           city,
           state,
           stars;

    int numStars;

    cout << endl;
    cout << "Please enter your first name: \n";
    getline(cin, firstName);

    cout << "Press Enter to continue....\n";
    cin.get();

    cout << "Please enter your last name: \n";
    getline(cin, lastName);

    cout << "Press Enter to continue....\n";
    cin.get();

    cout << endl;
    cout << "Please enter your ciy: \n";
    getline(cin, city);

    cout << "Press Enter to continue....\n";
    cin.get();

    cout << "Please enter your State: \n";
    getline(cin, state);

    cout << "Press Enter to continue....\n";
    cin.get();
 
    fullName = firstName + " " + lastName;
    cityState = city + ", " + state;

    numStars = fullName.length();
    stars.assign(numStars, '*');

    cout << endl;
    cout << stars   << endl;
    cout << fullName << endl;
    cout << stars   << endl;
    cout << endl;

    cout << stars   << endl;
    cout << cityState << endl;
    cout << stars   << endl;
    cout << endl;
    
    return 0;
}