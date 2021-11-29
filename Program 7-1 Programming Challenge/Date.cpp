/*
 * Name: Ruben Sanduleac
 * Date: 10/28/21
 */

#include "Date.h"

Date::Date(int mon, int da, int ye)
{
    month = mon;
    day = da;
    year = ye;
}

void Date::setMonth(int mo)
{
    month = mo;
}

void Date::setDay(int dd)
{
    day = dd;
}

void Date::setYear(int yr)
{
    year = yr;
}

int Date::getMonth()
{
    if(month < 0 || month > 12 )
    {
        return false;
    }
    else
    {
        return month;
    }
}

int Date::getDay()
{
    return 0;
}




