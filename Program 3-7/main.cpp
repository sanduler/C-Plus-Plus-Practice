//This prgoram uses a type cast to avoid an integer division
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    //Variables
    int books, 
        months;

    double booksPerMonth;

    //Inputs
    cout << "How many books do you plan to read? " << endl;
    cin >> books;

    cout << "How many months will it take you to read them?" << endl;
    cin >> months;

    //Compute
    booksPerMonth = static_cast<double>(books)/months;
    cout << "That is " << booksPerMonth << " books per month \n";
    return 0;
    
}