/******************************************************************************* 
** Author:       Ruben Sanduleac
** Date:         October 11th, 2021
** Description:  This program calcualtes how much a person earns in a month if the
*                the salary is one penny the first day, two pennies the second day,
*                , four pennies the third day and so on with the daily pay doubling
*                each day. The program asks the user for the number of the days the employee
*                worked fuing the moneth, validate that it is between 1 and 31 and then displays
*                a table showing how much salary was for each day worked, as well as the total 
*                pay earned for this month. The output should be displayed in dollars with
*                two decimal points, not pennies.
*******************************************************************************/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    //number of days
    int days;

    //accumulator for the cents doubling
    double total = 0.00;

    //Title
    cout << "**** Pennies for Pay Program *****" << endl;

    //Print statement for the user 
    cout << "How many days did you work this month:";
    cin >> days;
    
    //Validate the input, use a while loop to make sure the user enters a correct number
    while (days < 1 || days > 31)
    {
        cout << "Please try again" << endl;
        cout << "How many days did you work this month:";
        cin >> days;
    }

    //while the number is between 1 -31
    if (days >= 1 && days <= 31)
    {
        //start sum of 0.01
        total = (total + 0.01);

        //for loop to make 
        for (int startDay = 1; startDay <= days; startDay++)
        {
            cout << "Day " << startDay << ": " << "$" << total << endl;
            total = (total * 2);
        }
        
    }
    return 0;
}