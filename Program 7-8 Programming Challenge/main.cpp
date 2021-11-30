/*
** Name: Ruben Sanduleac
** Date: 11/29/21
** Discription: 
** 
*/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

struct MovieData
{
    string Title;
    string Director;
    int year;
    //minutes
    double time;

    MovieData()
    {
        Title = "unknown";
        Director = "unknown";
        year = 0;
        time = 0;
    }
};

int main()
{
    MovieData movie1;

    movie1.Director = "Christopher Noland";
    movie1.Title = "The Dark Knight";
    movie1.year = 2008;
    movie1.time = 118;

    cout << movie1.Director << " " << " " << movie1.year << " " << movie1.Title << " " << movie1.time << " minutes" << endl;
    return 0;
}