//This program demosntrates the use pf a switch statement
// This program simply tells the user what character they entered
#include <iostream>
using namespace std;

int main()
{
    char choice;

    cout << "Enter A, B, C, D or 1: " << endl;
    cin >> choice;

    switch(choice)
    {
        case 'A': cout << "You entered A\n";
        break;

        case 'B': cout << "You entered B\n";
        break;

        case 'C': cout << "You entered C\n";
        break;

        case 'D': cout << "You entered D\n";    
        break;

        case '1':
        cout << "You entered 1\n";
        break;

        default:
        cout << "You did not enter any of the asked characters!!\n";
    }
    return 0;
}