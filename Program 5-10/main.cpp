/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 10th, 2021
** Description:  This program averages 3 test scores. It uses a do-while loop
**               that allows the code to repeat as many times as the user wishes.
*******************************************************************************/ 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    //variables
    int score1,
        score2,
        score3;
    double average;
    char again;

    do
    {
        //Get there test scores
        cout << "\nEnter three scores and I will average them: ";
        cin >> score1 >> score2 >> score3;

        //calculate and display the average
        average = (score1 + score2 + score3) / 3.0;

        cout << "The average is " << average << "\n\n";

        //does the user want to average another set?
        cout << "Do you want to average another set? (Y/N) ";
        cin >> again;
    } while (again == 'Y' || again == 'y');
    return 0;
}
