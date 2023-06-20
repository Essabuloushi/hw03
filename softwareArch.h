#include "employee.h"

class softwareArch : public employee
{
    private:
    string departNum;
    string superVisor;
    float percentInc;
    int yearsOfExp;

    public:
    void setYearsOfExp(int newYears);
    void setDepartNum(string newDepart);
    void setSuperVisor(string newSuperVisor);
    void setPercInc(float newPercInc);
    string getDepartNum()const;
    string getSuperVisor()const;
    float getPercInc()const;
    int getYearsOfExp()const;
    void printInfo();
    void setEmployeeInfo();
    softwareArch();
    softwareArch(string newName, string newID, string newAge, string newPhoneNum, string newGender, string newJob, string newSalary, date newDate,string newDepart,string newSuperVisor, float newPayInc,int newYears);
};
void testFunction(softwareArch Person);