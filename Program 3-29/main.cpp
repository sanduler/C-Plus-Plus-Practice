//This program inputs the lengths of the two sides of a 
//right triangle, them calcualtes and dsiplays the length of the hypoteneuse. 

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double a,
           b,
           c;

    //get length of the two sides
    cout << "Enter the length of side a: \n";
    cin >> a;
    cout << "Enter the length of side b: \n";
    cin >> b;

    //Computer and display the length of the hypothenuse
    c = sqrt(pow(a, 2.0) + pow(b, 2.0));

    cout << "The length of the hypotenuse is ";
    cout << c << endl;
    return 0;
}