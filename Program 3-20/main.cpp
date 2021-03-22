//This program illustrates using the geline function 
// to read charecter data into a strong object.

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name,
           city;

    cout << "Please enter your name: \n";
    getline(cin, name);

    cout << "Enter the city you line in: \n";
    getline(cin, city);

    cout << "Hello, " << name << endl;
    cout << "You line in " << city << endl;

    return 0;
}