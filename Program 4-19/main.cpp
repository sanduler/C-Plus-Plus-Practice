//Prgoram 4-19 
#include <iostream>
using namespace std;

int main()
{
    char ch;
    bool again = true;

    while(again)
    {
        //Get a charcharer from the user
        cout << "Enter a digit or a letter: ";
        ch = cin.get();

        //Determine what the users entered
        if(ch >= '0' && ch <= '9')
        {
            cout << "You entered a digit "  << endl;
        }
        else if(ch >= 'A' && ch <= 'Z')
        {
            cout << "You entered an uppercase letter "  << endl;
        }
        else if(ch >= 'a' && ch <= 'z')
        {
            cout << "You entered a lowercase letter "  << endl;
        }
        else
        {
            cout << "The key entered is not a digit or a letter" << endl;
        }

        cout << "Would you like to play again:" << endl;
        cout << "Enter 0 for NO" << endl;
        cout << "Enter 1 for YES" << endl;
        cin >> again;     
    }

    return 0;
}