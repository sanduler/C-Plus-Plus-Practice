// This program passes an object to a fxn. It passes it to
// one function by referece and to anither by value.
#include<iostream>
#include<iomanip>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

class InventoryItem
{
private:
    /* data */
    int partNum;
    std::string description;
    int onHand;
    double price; 
public:
    InventoryItem(int, std::string, int, double);
    int getPartNum();
    std::string getDescription();
    int getOnHand();
    double getPrice();
    ~InventoryItem();
};

InventoryItem::InventoryItem(int p, std::string d, int oH, double cost)
{
    partNum = p;
    description = d;
    onHand = oH;
    price = cost;
}

InventoryItem::~InventoryItem()
{
    //not used
}

int InventoryItem::getPartNum()
{
    return partNum;
}

std::string InventoryItem::getDescription()
{
    return description;
}

int InventoryItem::getOnHand()
{
    return onHand;
}

double InventoryItem::getPrice()
{
    return price;
}

//fxn prototypes
void storeValues(InventoryItem&);   //Receives an object by reference
void showValues(InventoryItem);     //Receives an object by value

//main
int main()
{
    InventoryItem part;

    storeValues(part);
    showValues(part);
    return 0;
}

//store values
void storeValues(InventoryItem &item)
{
    int partNum;
    std::string description;
    int qty;
    double price;

    //get data from the user
    std::cout << "Enter data for the new part number \n";
    std::cout << "Part number: ";
    std::cin >> partNum;

    std::cout << "Description: ";
    std::cin.get();

    std::getline(std::cin, description);
    std::cout << "Quantity on hand: ";
    std::cin >> qty;
    std::cout << "Unit Price: ";
    std::cin >> price;

    //store the data in the inventory object
    item.storeInfo(partNum, description, qty, price);
}

//showValues function
void showValues(InventoryItem item)
{
    std::cout << std::fixed << std::showpoint << std::setprecision(2) << std::endl;
    std::cout << "Part Number     : "  << item.getPartNum() << std::endl;
    std::cout << "Description     : "  << item.getDescription() << std::endl; 
    std::cout << "Unit On Hands   : "  << item.getOnHand() << std::endl;
    std::cout << "Price           : $" << item.getPrice() << std::endl;
}