#ifndef employee_h
#define employee_h
#include <iostream>
#include <iomanip>
#include <string>
#include "date.h"
using namespace std;

//Base class
class employee
{
    private:
        string name;
        string ID;
        string age;
        string phoneNum;
        string gender;
        string job;
        string salary;
        date hireDate;

    public:

    //Mutators
    void setName(string newName);
    void setID(string newID);
    void setAge(string newAge);
    void setPhoneNum(string newPhoneNum);
    void setGender(string newGender);
    void setJob(string newJob);
    void setSalary(string newSalary);
    void setDate(string,string,string);
    void printInfo();
    void setEmployeeInfo();

    //Accessors
    string getName()const;
    string getID()const;
    string getAge()const;
    string getPhoneNum()const;
    string getGender()const;
    string getJob()const;
    string getSalary()const;
    string getDate()const;

    //Default constructor, and constructor that takes arguments
    employee(string, string, string, string, string, string, string, string,string,string);
    employee();
};
//Prints function with default constructor, allows for user to fill it out and then prints.
void testFunction(employee& person);
#endif