// #ifndef programmer_h
// #define programmer_h
#include "programmer.h"



string programmer::getDepartNum()const
{
    return departNum;
}
string programmer::getSuperVisor()const
{
    return superVisor;
}
float programmer::getPercInc()const
{
    return percentInc;
}
char programmer::getcIdent()const
{
    return cIdent;
}
char programmer::getjIdent()const
{
    return jIdent;
}

void programmer::setDepartNum(string newDepart)
{
    departNum = newDepart;
}
void programmer::setSuperVisor(string newsuperVisor)
{
    superVisor = newsuperVisor;
}
void programmer::setPercInc(float newPercInc)
{
    percentInc = newPercInc;
}
void programmer::setcIdent(char newcIdent)
{
    cIdent = newcIdent;
}
void programmer::setjIdent(char newjIdent)
{
    jIdent = newjIdent;
}
void programmer::checkLangC()
{
    if (getcIdent() == 'T' || getcIdent() == 't')
    {
        cout << "Programmer knows C++." << endl;
    }
    else 
    cout << "Programmer does not know c++." << endl;
}
void programmer::checkLangJ()
{
    
    if (getjIdent() == 'T' || getjIdent() == 't')
    {
        cout << "Programmer knows Java." << endl;
        return;
    }
    else 
    cout << "Programmer does not know java." << endl;
    return;
}
void programmer::setEmployeeInfo()
{
    string newDepartNum;
    string newSuperVisor;
    float newPercInc;
    char newcIdent;
    char newjIdent;

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
    cin.ignore(1000,'\n');

    cout << "\nInput T or F if Employee knows C++:";
    cin.get(newcIdent);
    setcIdent(newcIdent);
    cin.ignore(1000,'\n');

    cout << "\nInput T of F if Employee knows Java";
    cin.get(newjIdent);
    setjIdent(newjIdent);
    
    cout << endl;
}
void programmer::printInfo()
{
    employee::printInfo();
    cout << "Employee Department Number: " << getDepartNum() << endl;
    cout << "Employee Supervisor: " << getSuperVisor() << endl;
    cout << "Employee Percent Pay Increase: " << getPercInc() << "%" << endl;
    cout << "Employee Knowledge of C++ :";
    checkLangC();
    cout << endl;
    cout << "Employee Knowledge of Java: ";
    checkLangJ();
    cout << endl;

}
programmer::programmer()
{
    employee();
    departNum = "DEPARTMENT NUMBER";
    superVisor = "SUPERVISOR";
    percentInc = 0.0;
    cIdent = 'F';
    jIdent = 'F';
}
programmer::programmer(string newName, string newID, string newAge, string newPhoneNum, string newGender, string newJob, string newSalary, string newMonth, string newDay, string newYear,string newDepart,string newSuperVisor, float newPayInc,char newcIdent, char newJIdent)
:employee(newName,newID,newAge,newPhoneNum,newGender,newJob,newSalary,newMonth,newDay,newYear)
{
    departNum = newDepart;
    superVisor = newSuperVisor;
    percentInc = newPayInc;
    cIdent = newcIdent;
    jIdent = newJIdent;
}
void testProgrammer(programmer& Person)
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
// #endif