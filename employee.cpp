#include "employee.h"

void employee::setName(string newName)
{
    name = newName;
}
void employee::setID(string newID)
{
    ID = newID;
}
void employee::setAge(string newAge)
{
    age = newAge;
}
void employee::setPhoneNum(string newPhoneNum)
{
    phoneNum = newPhoneNum;
}
void employee::setGender(string newGender)
{
    gender = newGender;
}
void employee::setJob(string newJob)
{
    job = newJob;
}
void employee::setSalary(string newSalary)
{
    salary = newSalary;
}
void employee::setDate(string newMonth,string newDay,string newYear)
{
    hireDate.setMonth(newMonth);
    hireDate.setDay(newDay);
    hireDate.setYear(newYear);
}
//Accessors
string employee::getName()const
{
    return name;
}
string employee::getID()const
{
    return ID;
}
string employee::getAge()const
{
    return age;
}
string employee::getPhoneNum()const
{
    return phoneNum;
}
string employee::getGender()const
{
    return gender;
}
string employee::getJob()const
{
    return job;
}
string employee::getSalary()const
{
    return salary;
 }
string employee::getDate()const
{
    return hireDate.getDate();
}
employee::employee()
{
    name = "NAME";
    ID = "ID";
    age = "AGE";
    phoneNum = "PHONE NUMBER";
    gender = "GENDER";
    job = "POSITION";
    salary = "SALARY";
    hireDate.getDate();
}
void employee::setEmployeeInfo()
{  
    string newName;
    string newID;
    string newAge;
    string newPhoneNumber;
    string newGender;
    string newPosition;
    string newSalary;
    date newHireDate;

    cout << "\nInput Employee Name: ";
    getline(cin,newName);
    setName(newName);
    //cin.ignore(1000,'\n');

    cout << "\nInput Employee ID Number: ";
    getline(cin,newID);
    setID(newID);
    //cin.ignore(1000,'\n');


    cout << "\nInput Employee Age: ";
    getline(cin,newAge);
    setAge(newAge);
    //cin.ignore(1000,'\n');


    cout << "\nInput Employee Phone Number: #";
    getline(cin,newPhoneNumber);
    setPhoneNum(newPhoneNumber);
    //cin.ignore(1000,'\n');


    cout << "\nInput Employee Gender: ";
    getline(cin,newGender);
    setGender(newGender);
    //cin.ignore(1000,'\n');


    cout << "\nInput Employee Position: ";
    getline(cin,newPosition);
    setJob(newPosition);
    //cin.ignore(1000,'\n');


    cout << "\nInput Employee Salary: $";
    getline(cin,newSalary);
    setSalary(newSalary);
    //cin.ignore(1000,'\n');


    cout << "\nInput Employee Hire Date: ";
    newHireDate.setHireDate();
    setDate(newHireDate.getMonth(),newHireDate.getDay(),newHireDate.getYear());
    //cin.ignore(1000,'\n');
    cout << endl;

}
void employee::printInfo()
{
    cout << "Employee Name: " << getName() << endl;
    cout << "Employee ID Number: " << getID() << endl;
    cout << "Employee Age: " << getAge() << " years of age." << endl;
    cout << "Employee Phone Nuber: #" << getPhoneNum() << endl;
    cout << "Employee Gender: " << getGender() << endl;
    cout << "Employee Position: " << getJob() << endl;
    cout << "Employee Salary: $" << getSalary() << endl;
    cout << "Employee Hire Date: ";
    hireDate.printHireDate();
}
void testFunction(employee& Person)
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
employee::employee(string newName, string newID, string newAge, string newPhoneNum, string newGender, string newJob, string newSalary, string newMonth,string newDay, string newYear):hireDate(newMonth,newDay,newYear)
{
    name = newName;
    ID = newID;
    age = newAge;
    phoneNum = newPhoneNum;
    gender = newGender;
    job = newJob;
    salary = newSalary;
    
}
