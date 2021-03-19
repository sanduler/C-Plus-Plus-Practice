//This program covers seconds to minutes to hours to minutes
//to seconds. It uses integer divisions and the modulus operator.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    double totalSeconds;

    double years;
    double months;
    double weeks;
    double days;
    double hours;
    double minutes;
    double seconds;
    bool loop = true;

    while(loop)
    {
        cout << "*************************************************************" << endl;
        cout << "Hi, I am Edeth you virtual converter. " << endl;
        cout << "Please enter any amount of seconds and I will convert them " << endl;
        cout << "to minutes, hours, days, weeks, months and years. " << endl;
        cout << "*************************************************************" << endl;
        cout << endl < endl;

        cout << "Please enter the amount of seconds " << endl;
        cout << "Seconds: ";
        cin >> totalSeconds;

        //Calculate number of minutes
        minutes = totalSeconds / 60;
        hours = minutes / 60;
        days = hours / 24; 
        weeks = days/7
        years = days/365
        
        cout << "There are " << minutes << " in " << totalSeconds << " seconds. " << endl;
        cout << "There are " << hours << " hours in " << totalSeconds << " seconds. " << endl;
        cout << "There are " << days << " days in " << totalSeconds << " seconds. " << endl;
        cout << "There are " << weeks << " weeks in " << totalSeconds << " seconds. " << endl;
        cout << "There are " << years << " years in " << totalSeconds << " seconds. " << endl;

        cout << endl < endl;
        cout << "Do you want to run the Edith again?" << endl;
        cout << "Enter 0 for No and 1 for Yes. " << endl;
        cout << "1. Yes " << endl;
        cout << "0. No " << endl
        cin >> loop;

    }

    return 0;
}