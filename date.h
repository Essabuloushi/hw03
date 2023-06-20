#include <iostream>
#include <iomanip>
#include <string>
#pragma once
using namespace std;
//Composition class
class date
{
    private:
    string month;
    string day;
    string year;

    public:
    //Mutators
    void setMonth(string newMonth);
    void setDay(string setDay);
    void setYear(string setYear);

    //Accessors
    string getMonth()const;
    string getDay()const;
    string getYear()const;
    string getDate()const;

    void setHireDate();
    void printHireDate();

    //Default constructor and constructor that passes all variables
    date(); 
    date(string,string,string);
};