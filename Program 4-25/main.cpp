//This program is carefully cosntructec to use the 
// "fall trhough " feature of switch statement.

#include <iostream>
using namespace std;

int main()
{
    int modelNum;


    //Display availible models and get the users choice
    cout << "Our TVs come in three models: The 100, 200 and 300.\n";
    cout << "Which one you want?" << endl;
    cin >> modelNum;

    //Display features of the selected model
    cout << "\nThat model has the following features:\n";
    switch(modelNum)
    {
        case 300:
        cout << "   Built-in DVR\n";
        case 200:
        cout << "   1080P HD picture \n";
        case 100:
        cout << "   42\" LCD flat screen \n";
        break;
        default :
        cout << "You can only choose the 100, 200, or 300. \n";
    }
    return 0;
}