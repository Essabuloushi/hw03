
#include "softwareArch.h"
#include "employee.h"

string softwareArch::getDepartNum()const
{
    return departNum;
}
string softwareArch::getSuperVisor()const
{
    return superVisor;
}
float softwareArch::getPercInc()const
{
    return percentInc;
}
int softwareArch::getYearsOfExp()const
{
    return yearsOfExp;
}
void softwareArch::setDepartNum(string newDepart)
{
    departNum = newDepart;
}
void softwareArch::setSuperVisor(string newsuperVisor)
{
    superVisor = newsuperVisor;
}
void softwareArch::setPercInc(float newPercInc)
{
    percentInc = newPercInc;
}
void softwareArch::setYearsOfExp(int newYears)
{
    yearsOfExp = newYears;
}
void softwareArch::setEmployeeInfo()
{
    string newDepartNum;
    string newSuperVisor;
    float newPercInc;
    int newYears;

    employee::setEmployeeInfo();
    cout << "Input Employee Department Number: ";
    getline(cin,newDepartNum);
    setDepartNum(newDepartNum);

    cout << "\nInput Employee Supervisor: ";
    getline(cin,newSuperVisor);
    setSuperVisor(newSuperVisor);

    cout << "\nInput Employee Percent Pay increase :%";
    cin >> newPercInc;
    setPercInc(newPercInc);

    cout << "\nInput Employee Years of Experience:";
    cin >> newYears;
    setYearsOfExp(newYears);
    cout << endl;
}
void softwareArch::printInfo()
{
    employee::printInfo();
    cout << "Employee Department Number: " << getDepartNum() << endl;
    cout << "Employee Supervisor: " << getSuperVisor() << endl;
    cout << "Employee Percent Pay Increase: %" << getPercInc() << endl;
    cout << "Employee years of Experience: " << getYearsOfExp() << endl;
}
softwareArch::softwareArch()
{
    employee();
    departNum = "DEPARTMENT NUMBER";
    superVisor = "SUPERVISOR";
    percentInc = 0.0;
    yearsOfExp = 0;
}
softwareArch::softwareArch(string newName, string newID, string newAge, string newPhoneNum, string newGender, string newJob, string newSalary, string newMonth,string newDay, string newYear,string newDepart,string newSuperVisor, float newPayInc,int newYears)
: employee(newName,newID,newAge,newPhoneNum,newGender,newJob,newSalary,newMonth,newDay,newYear)
{
    departNum = newDepart;
    superVisor = newSuperVisor;
    percentInc = newPayInc;
    yearsOfExp = newYears;
    
}
void testSoft(softwareArch& Person)
{
    cout << "\nThis function is going to test the before and after of all member functions." << endl;
    cout << "**************************************************" << endl;
    cout << "Before: " << endl;
    Person.printInfo();
    cout << "\n";
    cout << "**************************************************" << endl;
    cout << "Set person input: " << endl;
    Person.setEmployeeInfo();
    cout << "__________________________________________________" << endl;
    Person.printInfo();
    cout << endl;

}
