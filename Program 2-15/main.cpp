//This program demostrates and practices the string class 
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

int main()
{
    string movieTitle;
    string movieYear;
    cout << endl << endl;
    movieTitle = "Wheels of Fury";
    movieYear = "1991";
    cout << "My favorite movie is " << movieTitle << endl;
    cout << "The year of movie release " << movieYear << endl << endl;
    return 0;
}