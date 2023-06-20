#ifndef softwareArch_h
#define softwareArch_h
#include <iostream>
#include <string>
#include "employee.h"
using namespace std;
//Softwareach inherits employee
class softwareArch : public employee        
{
    private:
    string departNum;       //Added variables
    string superVisor;
    float percentInc;
    int yearsOfExp;

    public:
    // Mutators
    void setYearsOfExp(int newYears);   
    void setDepartNum(string newDepart);
    void setSuperVisor(string newSuperVisor);
    void setPercInc(float newPercInc);

    // Accessors
    string getDepartNum()const;
    string getSuperVisor()const;
    float getPercInc()const;
    int getYearsOfExp()const;
    void printInfo();
    void setEmployeeInfo();
    //Constructors, includes defualt constructor and preloaded constructor
    softwareArch();
    softwareArch(string newName, string newID, string newAge, string newPhoneNum, string newGender, string newJob, string newSalary, string newMonth,string newDay,string newYear,string newDepart,string newSuperVisor, float newPayInc,int newYears);
};
void testSoft(softwareArch& Person);
//Prints function with default constructor, allows for user to fill it out and then prints.

#endif