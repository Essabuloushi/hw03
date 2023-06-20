#ifndef programmer_h
#define programmer_h
#include <iostream>
#include <string>
#include "employee.h"
using namespace std;
//Programmer class inherits employee
class programmer : public employee
{
    private:
    string departNum;       //Added variables
    string superVisor;
    float percentInc;
    char cIdent;
    char jIdent;

    public:

    //Accessors
    string getDepartNum()const;     
    string getSuperVisor()const;
    float getPercInc()const;
    char getcIdent()const;
    char getjIdent()const;

    //Mutators
    void setDepartNum(string newDepart);
    void setSuperVisor(string newSuperVisor);
    void setPercInc(float newPercInc);
    void setcIdent(char newcIdent); 
    void setjIdent(char newjIdent);
    void setEmployeeInfo();
    void printInfo();

    void checkLangC(); //Checks to see if user knows C++ and Java
    void checkLangJ();

    programmer();
    programmer(string newName, string newID, string newAge, string newPhoneNum, string newGender, string newJob, string newSalary, string newMonth,string newDay,string newYear,string newDepart,string newSuperVisor, float newPayInc,char newcIdent, char newJIdent);
    //Default, and loaded constructors

};
void testProgrammer(programmer& Person);
//Prints function with default constructor, allows for user to fill it out and then prints.
#endif
