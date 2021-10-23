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

    std::getline(cin, description);
    std::cout << "Quantity on hand: ";
    std::cin >> qty;
    std::cout << "Unit Price: ";
    std::cin >> price;

    //store the data in the inventory object
    item.storeInfo(partNum, description, qty, price);
}