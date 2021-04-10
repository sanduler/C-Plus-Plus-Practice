//The switch statmeent in this program uses the fall through feature
// to accept bot hupercase and lwercase letters entered by the user.

#include <iostream>
using namespace std;

int main()
{
    char feedGrade;

    //get desired grade of feed
    cout << "Our dog food is availible in three grades:\n";
    cout << "A, B, C. Which do you want pricing for? ";

    cin >> feedGrade;

    switch (feedGrade)
    {
    case 'a':
    case 'A': cout << "30 cents per pount. \n";
              break;
    case 'b':
    case 'B': cout << "20 cents per pount. \n";
              break;
    case 'c':
    case 'C': cout << "10 cents per pount. \n";
              break;
    default:
              cout << "Thats invalid choice.\n";
              break;
    }
    return 0;
}