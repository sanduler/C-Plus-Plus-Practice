//Word game 

#include<iostream>
#include<string>
using namespace std;

int main()
{
    //Variable strings
    string name,
           city,
           activity,
           animal,
           product,
           petname;

    //Variables integers
    int    age,
           kids;


    //stored strings

    string s1  = "There once was a person named ",
           s2  = " who lived in ",
           s3  = "\nand who loved ",
           s4  = ". At the age of ",
           s5  = ", ",
           s6  = " gradiated \nfrom high school and went to work in a ",
           s7  = " factory. \n",
           s8  = " got married and had ",
           s9  = " children and a pet ",
           s10 = " named ",
           s11 = ".\nEvery weekened the family and ",
           s12 = " had fun ",
           s13 = " together. ";
    cout << "Enter the follwoing infromation and I'll ";
    cout << " tell you a story \n\n";
    cout << "You name: ";
    getline(cin, name);

    cout << "The name of the city: ";
    getline(cin, city);

    cout << "A physical activity you enjoy: ";
    getline(cin, activity);

    cout << "An animal: ";
    getline(cin, animal);
    
    cout << "A food or product you can buy: ";
    getline(cin, product);

    cout << "An adjective noun: ";
    getline (cin, petname);

    cout << "A number between 10 and 50: ";
    cin >> age;

    cout << "A number between 0 and 15";
    cin >> kids; 

    cout << endl << s1 << name << s2 << city << s3 << activity;
    cout << s4 << age << s5 << name << s6 << product << s7;
    cout << name << s8 << kids << s9 << animal << s10 << petname;
    cout << s11 << petname << s12 << activity << s13 << endl;

    return 0;

}