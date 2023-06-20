#include "employee.h"

class programmer : public employee
{
    private:
    string departNum;
    string superVisor;
    float percentInc;
    char cIdent;
    char jIdent;

    public:

    string getDepartNum()const;
    string getSuperVisor()const;
    float getPercInc()const;
    char getcIdent()const;
    char getjIdent()const;

    void setDepartNum(string newDepart);
    void setSuperVisor(string newSuperVisor);
    void setPercInc(float newPercInc);
    void setcIdent(char newcIdent);
    void setjIdent(char newjIdent);
    void setEmployeeInfo();
    void printInfo();

    bool checkLangC();
    bool checkLangJ();

    programmer();
    programmer(string newName, string newID, string newAge, string newPhoneNum, string newGender, string newJob, string newSalary, date newDate,string newDepart,string newSuperVisor, float newPayInc,char newcIdent, char newJIdent);


};
void testFunction(programmer Person);