#include <iostream>
#include <iomanip>
#include <string>
#include "date.h"
using namespace std;

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

    
    void setName(string newName);
    void setID(string newID);
    void setAge(string newAge);
    void setPhoneNum(string newPhoneNum);
    void setGender(string newGender);
    void setJob(string newJob);
    void setSalary(string newSalary);
    void setDate(date newDate);
    void printInfo();
    void setEmployeeInfo();


    string getName()const;
    string getID()const;
    string getAge()const;
    string getPhoneNum()const;
    string getGender()const;
    string getJob()const;
    string getSalary()const;
    string getDate()const;

    employee(string newName, string newID, string newAge, string newPhoneNum, string newGender, string newJob, string newSalary, date newDate);
    employee();
};
void testFunction(employee person);
