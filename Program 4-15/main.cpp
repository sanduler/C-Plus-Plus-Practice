//This program illistrates whan can happen when a boolian value is comapred to the c++ cosntant true;

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    cout << "Is '?' an alphabatical charecter? " << isalpha('?') << endl;
    cout << "Is 'X' an alphabatical charecter? " << isalpha('X') << endl;
    cout << "Is 'x' an alphabatical charecter? " << isalpha('x') << endl << endl;


    cout << "Ask if (isalpha('x') == true) " << endl;
    if (isalpha('x') == true)
    {
        cout << "The letter x IS an alphabetical charecter \n\n";
    }
    else 
    {
        cout << "The letter x is NOT an alphabetical chareacter \n\n";
    }
    cout << "Ask if (isalpha('x') \n";
    if (isalpha('x'))
    {
        cout << "The letter x IS an alphabetical charecter \n\n";
    }
    else 
    {
        cout << "The letter x is NOT an alphabetical chareacter \n\n";
    }

    return 0;
}
