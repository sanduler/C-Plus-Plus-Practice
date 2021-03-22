//This program tracks the inventory of two widgests sotres.
//It ilustrates the ue of multiple and combined assignment.

#include<iostream>
using namespace std;

int main()
{
    //Variables
    int begInv, //Begining inventory for both stores
        sold,   //Number of widgets sold
        store1, //store1 inventory
        store2; //store2 inventory

    cout << "One week ago, two new windtets sore opened\n";
    cout << "at the same time with the same biggining \n";
    cout << "inventory. What was the begining inventory? \n";
    cin >> begInv;

    //set each store inventory
    store1 = store2 = begInv;

    //get the number of widgets sold at each store
    cout << "How many widgets has store 1 sold? \n";
    cin >> sold;
    store1 -=sold;

    cout << "How many widgets has store 2 sold?\n";
    cin >> sold;
    store2 -= sold;

    //Display current inventory
    cout << "\nThe current inventory of each store:\n";
    cout << "Store 1: " << store1 << endl;
    cout << "Store 2: " << store2 << endl;

    return 0;    
}