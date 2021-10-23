// This program passes an object to a fxn. It passes it to
// one function by referece and to anither by value.
#include<iostream>
#include<iomanip>
#include<string>

class InventoryItem
{
private:
    /* data */
    int partNum;
    std::string description;
    int onHand;
    double price; 
public:
    InventoryItem(int, string, int, double);
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
void storeValues(InventoryItem&);