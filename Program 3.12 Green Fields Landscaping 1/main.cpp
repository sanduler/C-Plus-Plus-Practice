//Greenfield Landscaping Case study part1
// compute the number of cubic tards of mulch a customer needs and its price. 
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Variables
    const double yardMulch = 22.00;

    double numSqrFeet;
    double depthMulch;

    double numCubNeeded,
           numCubYards,
           totalPrice;

    cout << "Hello Customer, this program dtermines the number of cubic \n";
    cout << "yards of mulch the customer needs and the total price. \n";
    cout << endl << endl;

    cout << "How many square feet to be covered in the landscaping \n";
    cin >> numSqrFeet;

    cout << "What is the depth of the mulch that will be spread during the landscaping \n";
    cin >> depthMulch;20

    //Calculations
    numCubNeeded = numSqrFeet * (depthMulch/12.0);
    numCubYards = numCubNeeded / 27;
    totalPrice = numCubYards * yardMulch;

    //Display Results
    cout << "\n Number of cubic yards needed " << numCubYards << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "Price for cubic yard: $" << setw(7);
    cout << yardMulch << endl;
    cout << "Total price:          $" << setw(7);
    cout << totalPrice << endl << endl;

    return 0;
}