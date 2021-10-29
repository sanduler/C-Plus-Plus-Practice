/*
 * Name: Ruben Sanduleac
 * Date: 10/28/21
 */

#ifndef DATE_H
#define DATE_H


class Date{
private:
    int month;
    int day;
    int year;
public:
    Date(int mon = 1, int da = 1, int ye = 2001);

    //setters
    void setMonth(int);
    void setDay(int);
    void setYear(int);

    //getters
    int getMonth();
    int getDay();
    int getYear();


};


#endif
