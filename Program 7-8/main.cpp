//Ruben Sanduleac
//October 20th, 2021

#include <iostream>


class SimpleStat
{
private:
    /* data */
    int largest,
        sum,
        count;
    bool isNewLargest(int);
public:
    SimpleStat(/* args */);
    ~SimpleStat();

    //setter
    bool addNumber(int);

    //getter
    double calcAverage();
    int getLargest();
    int getCount();
};

SimpleStat::SimpleStat(/* args */)
{
    largest = sum = sum = 0;
}

SimpleStat::~SimpleStat()
{
    //not used
}

int SimpleStat::getLargest()
{   
    return largest;
}
int SimpleStat::getCount()
{
    return count;
}
bool SimpleStat::addNumber(int num)
{
    bool goodNum = true;
    if (num >= 0)
    {
        /* code */
        sum += num;
        count ++;
        if (isNewLargest(num))
        {
            /* code */
            largest = num;
        }
        
    }
    else
    {
        goodNum = false;
    }
    
    return goodNum;
}

bool SimpleStat::isNewLargest(int num)
{
    if (num > largest)
    {
        /* code */
        return true;
    }
    else
    {
        return false;
    }
    
}

double SimpleStat::calcAverage()
{
    if (count > 0)
    {
        /* code */
        return static_cast<double>(sum)/count;
    }
    else
    return 0;
    
}

int main()
{
    int num;

    SimpleStat statHelper;

    std::cout << "Please enter the set of non negative integer \n";
    std::cout << "values you want to average. Seperate them with \n";
    std::cout << "spaces and enter -1 after the last value. \n\n";

    std::cin >> num;
    while (num >= 0)
    {
        /* code */
        statHelper.addNumber(num);
        std::cin >> num;
    }
    std::cout << "\nYou entered " << statHelper.getCount() << " values. \n";
    std::cout << "The largest value was " << statHelper.getLargest() << std::endl;
    std::cout << "The average value was " << statHelper.calcAverage() << std::endl;

    return 0;
    
}