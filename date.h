#include <iostream>
#include <iomanip>
#include <string>
#pragma once
using namespace std;

class date
{
    private:
    string month;
    string day;
    string year;

    public:
    void setMonth(string newMonth);
    void setDay(string setDay);
    void setYear(string setYear);

    string getMonth()const;
    string getDay()const;
    string getYear()const;
    string getDate()const;

    void setHireDate();
    void printHireDate();

    date();
};