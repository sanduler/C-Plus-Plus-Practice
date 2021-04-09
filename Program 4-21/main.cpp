//This program desmontrates some of the availible
//C++ Charecter testing fucntions
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char input;


    cout << "Enter any character: ";
    cin.get(input);


    cout << "The character you entered is: " << input << endl;
    cout << "Its ACSI code is: " << static_cast<int>(input) << endl;

    if(isalpha(input))
    {
        cout << "Thats a alphabetic charecter.\n";
    }
    if(isdigit(input))
    {
        cout << "Thats a numeric digit.\n";
    }
    if(islower(input))
    {
        cout << "The letter you entered is lowercase. \n";
    }
    if(isupper(input))
    {
        cout << "The letter you entered is uppercase. \n";
    }
    if(isspace(input))
    {
        cout << "Thats a whitespace character. \n";
    }

    return 0;
}