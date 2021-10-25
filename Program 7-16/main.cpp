//this program uses two strongly typed enum data types
#include<iostream>
#include<iomanip>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

enum class Presidents {MCKINLY, ROOSEVELT, TAFT};
enum class VicePresidents {ROOSEVELT, FAIRBANKS, SHERMAN};

int main()
{
    Presidents prez = Presidents::ROOSEVELT;
    VicePresidents vp1 = VicePresidents::ROOSEVELT;
    VicePresidents vp2 = VicePresidents::SHERMAN;

    cout << static_cast<int>(prez) << " " << static_cast<int>(vp1);
    cout << " " << static_cast<int>(vp2) << endl;

    return 0;
 }