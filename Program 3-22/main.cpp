//This program demonstates three ways to use cin.get to pause the program
#include<iostream>
using namespace std;

int main()
{
    char ch;

    cout << "This program has puased. Press Enter to continue \n";
    ch = cin.get();
    cout << "This program has paused for the second time. Press Enter again \n";
    cin.get(ch);
    cout << "This program has paused for the final time. Press Enter\n";
    cin.get();

    cout << "Thank you\n";
    return 0;
}