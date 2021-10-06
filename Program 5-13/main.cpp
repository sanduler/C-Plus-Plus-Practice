/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 6th, 2021
** Description:  This program is averages tests scores. It asks the users for the
**               number of students and the number of test scores per students.
*******************************************************************************/ 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    //number of students and tests per studentcl
    int numStudents,
        numTests;
    //average test score for a student
    double average;

    //get the number of students
    cout << "This program averages tests scores\n";
    cout << "How many students are there? ";
    cin >> numStudents;

    //Get the number of tests scores per student
    cout << "How mnay test scores does each student have?";
    cin >> numTests;
    cout << endl;

    //read each studwents scores and compute their average
    
    for (int snum = 1; snum < numStudents; snum++)
    {
        /* code */
        double total = 0.0;
        for (int test = 1; test <= numStudents; test++)
        {
            int score;

            //read a score and add it to the accumulator
            /* code */
            cout << "Enter score " << test << " for ";
            cout << "student " << snum << ": ";
            cin >> score;
            total += score;
        }
        
        //compute and displays the students average
        average = total/numTests;
        cout << "The average score for student " << snum;
        cout << " is " << average << "\n\n";
    }
    return 0;
}