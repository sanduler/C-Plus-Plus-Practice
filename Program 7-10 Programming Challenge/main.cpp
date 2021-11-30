/*
* Name: Ruben Sanduleac
* Data: November 30th, 2021
* Discription: Write a program that uses a structure named CorpData to store the following
* information on a company division:
*	 Division name (such as East, West, North, or South)
*	 First quarter sales
*	 Second quarter sales
*	 Third quarter sales
*	 Fourth quarter sales
*	 Total annual sales
* 	 Average quarterly sales.
* Include a constructor that allows the division name and four quarterly sales
* amounts to be specified at the time a CorpData variable is created.
* The program should create four variables of this structure, each representing one
* of the following corporate divisions: East, West, North, and South. Each variable
* should be passed in turn to a function that calculates and stores the total sales
* and average quarterly sales for that division. Once this has been done for each
* division, each variable should be passed in turn to a function that displays the
* division name, total sales, and quarterly average.
**/

#include <iostream>
#include <string>
using namespace std;

struct CorpData
{
    /* data */
    string divName;
    double firstQrtr,
           secondQrtr,
           thirdQrtr,
           fourthQrtr,
           totalAnnual,
           average;
    //Function prototype that takes the division name, and each of the quarterly sales.       
    CorpData(string nam, double fir, double sec, double thir, double fort)
    {
        divName = nam;
        firstQrtr = fir;
        secondQrtr = sec;
        thirdQrtr = thir;
        fourthQrtr = fort;
    }       
};

void calculateSales(CorpData &nam);
void displayInfo(CorpData nam); 

int main()
{
    //sends the info to the prototype as a preset
    CorpData East("South", 2000, 1000, 1400, 1900);
	CorpData West("East", 1500, 4000, 1750 , 2250);
	CorpData North("West", 5750, 2500, 1250, 2000);
	CorpData South("Noth", 6250, 1750, 6000, 1500);

    //calc for each of the locations
    calculateSales(South);
    calculateSales(East);
    calculateSales(West);
    calculateSales(North);

    //displays the info for each divisions
    displayInfo(South);
    displayInfo(East);
    displayInfo(West);
    displayInfo(North);

    return 0;
}

/*************************************************************
 * Name: void calculateSales(CorpData &nam)              
 * Discription: This function computes the annual amount and the average.
 *************************************************************/
void calculateSales(CorpData &nam)
{
    nam.totalAnnual = nam.firstQrtr + nam.secondQrtr + nam.thirdQrtr + nam.fourthQrtr;
    nam.average = nam.totalAnnual/4;
}

/*************************************************************
 * Name: void displayInfo(CorpData nam)                      
 * Discription: This function shows the name, sales and computed average.
 *************************************************************/
void displayInfo(CorpData nam)
{
    cout << endl;
    cout << " -- Sales Data -- " << endl;
    cout << "Division: " << nam.divName << endl;
    cout << "Total Sales: " << nam.totalAnnual << endl;
    cout << "Average: " << nam.average << endl;
    cout << endl;
}