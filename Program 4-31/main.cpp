//this program predicts the players future using random numbers and an if/else if statement
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    //strings to hold users entered careers
    string career1, career2, career3, career4, career5, career6;

    int randomNum;
    unsigned seed = time(0);
    srand(seed);

    cout << "I am fortune teller. Look into my crystal screen \n";
    cout << "and enter 6 careers you would like to have.\n";
    cout << "Then I will predict what you will be \n\n";

    cout << "Career choice 1: ";
    getline(cin, career1);
    cout << "Career choice 2: ";
    getline(cin, career1);
    cout << "Career choice 3: ";
    getline(cin, career1);
    cout << "Career choice 4: ";
    getline(cin, career1);
    cout << "Career choice 5: ";
    getline(cin, career1);
    cout << "Career choice 6: ";
    getline(cin, career1);

    //randomly generates an integer between 1 and 6
    randomNum = 1 + rand() % 6;

    // use branching logic to output the prediction
    if (randomNum == 1)
    {
        cout << "\n You will be a " << career1 << ". \n";
    }
    else if (randomNum == 2)
    {
        cout << "\n You will be a " << career2 << ". \n";
    }
    else if (randomNum == 3)
    {
        cout << "\n You will be a " << career3 << ". \n";
    }
    else if (randomNum == 4)
    {
        cout << "\n You will be a " << career4 << ". \n";
    }
    else if (randomNum == 5)
    {
        cout << "\n You will be a " << career5 << ". \n";
    }
    else if (randomNum == 6)
    {
        cout << "\n You will be a " << career6 << ". \n";
    }
    else
    {
        cout << "\nSorry you are special and you will be an Avenger!!!!" << endl;
    }
    
    return 0;
}