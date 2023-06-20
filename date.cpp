#ifndef date_h
#define date_h
#include "date.h"


void date::setDay(string newDay)
{
    day = newDay;
}
void date::setMonth(string newMonth)
{
    month = newMonth;
}
void date::setYear(string newYear)
{
    year = newYear;
}
string date::getDay()const
{
    return day;
}
string date::getMonth()const
{
    return month;
}
string date::getYear()const
{
    return year;
}
date::date()
{
    month = "MONTH";
    year = "YEAR";
    day = "DAY";
}
string date::getDate()const
{
    return day;
    return month;
    return year;
}
void date::setHireDate()
{
    string newHireMonth;
    string newHireDay;
    string newHireYear;
    cout << "Input all of following by 00/00/0000 format." << endl;

    cout << "\nMonth of hiring: " << endl;
    getline(cin,newHireMonth);
    setMonth(newHireMonth);
    //cin.ignore(1000,'\n');


    cout << "\nDay of hiring: " << endl;
    getline(cin,newHireDay);
    setDay(newHireDay);
   // cin.ignore(1000,'\n');


    cout << "\nYear of hiring: " << endl;
    getline(cin,newHireYear);
    setYear(newHireYear);
    //cin.ignore(1000,'\n');
    cout << endl;
    
}
void date::printHireDate()
{
    cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
}
date::date(string newMonth, string newDay,string newYear)
{
    month = newMonth;
    day = newDay;
    year = newYear;
   
}
#endif