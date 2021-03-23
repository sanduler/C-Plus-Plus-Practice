//This program uses an if else if statment to assgin a 
// leter grade of A, B, C, D, or F to a numeric test score.

#include<iostream>
using namespace std;

int main()
{
    //Numerical Constants that hold the grade
    const int MIN_A = 90,
              MIN_B = 80,
              MIN_C = 70,
              MIN_D = 60;

    //Holds the numerical score
    int testScore;

    //holds the letter grade
    char grade;

    //get the numeric score
    cout << "Enter you numeric test score and I will\n";
    cout << "tell you the letter grade you earned: ";
    cin >> testScore;

    //Determine the letter grade
    if(testScore >= MIN_A)
    {
        grade = 'A';
    
    }
    else if(testScore >= MIN_B)
    {
        grade = 'B';   
    }
    else if(testScore >= MIN_C)
    {
        grade = 'C';
    }
    else if(testScore >= MIN_D)
    {
        grade = 'D';
    }
    else if(testScore >= 0)
    {
        grade = 'F';
    }
    else
    {
        testScore = false;
    }

    //Display the letter grade 
    if(testScore)
    {
        cout << "You grade is " << grade << ".\n";
    }
    else
    {
         cout << "Not a valid grade entered" << endl;
    }
    return 0;
}