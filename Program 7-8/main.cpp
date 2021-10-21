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
    int getLargest()
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

bool SimpleStat::addNumber(int num)
{
    bool goodNum - true;
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

    cout << "Please enter the set of non negative integer \n";
    cout << "values you want to average. Seperate them with \n"
}