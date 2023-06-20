#include<iostream>
#include<iomanip>
#include <string>
#include "date.h"
#include "employee.h"
#include "softwareArch.h"
#include "programmer.h"
using namespace std;
//Essa Buloushi                 CS1C
//
/**************************************************************
 * EMPLOYEE INHERITENCE
 * ------------------------------------------------------------
 * This program is based off the employee class and uses
 * inheritence to fill information for Programmer,Software arch,
 * and employee. It includes a composition class of date
 * ------------------------------------------------------------
 * INPUTS
 * Employee 1,2,3,4
 * SoftwareArch 1,2
 * Programmer 1,2
 *
 * * ************************************************************/

int main()
{
    //Creates employee objects, shows default construtor, then allows for user to pass information in and also passes in pre-loaded
    //arguments into the constructor
    employee employee1;
    cout << "--------------------------------------------------" << endl;
    testFunction(employee1);
    cout << "--------------------------------------------------" << endl;

    employee employee2("Stephen Colbert","12346","40","310-555-5555","M","Comedian","70,123","03","02","2004");
    cout << "Printing Employee 2 information." << endl;
    employee2.printInfo();
    cout << "**************************************************" << endl;

    
    employee employee3("James Cordon","87654","37","703-703-1234","M","Talk Show Host","900,000","12","25","2014");
    cout << "Printing Employee 3 information." << endl;
    employee3.printInfo();
    cout << "**************************************************" << endl;

    employee employee4("Katie Couric","77777","58","203-555-6789","F","News Reporter","500,500","03","01","2005");
    cout << "Printing Employee 4 information. " << endl;
    employee4.printInfo();
    cout << "**************************************************" << endl;

    programmer programmer1;
    testProgrammer(programmer1);
    programmer programmer2("Mary Coder","65432","28","310-555-5555","F","Programmer","770,123","02","08","2010","6543222","Mary Leader", 7, 'Y', 'Y');
    programmer2.printInfo();
    cout << "**************************************************" << endl;

    //Creates SoftwareArchs objects, shows default construtor, then allows for user to pass information in and also passes in pre-loaded
    //arguments into the constructor
    softwareArch arch1;
    testSoft(arch1);
    softwareArch arch2("Sally Designer","87878","38","310-555-8888","F","Architect","870,123","02","08","2003","6543422","Mary Big Boss", 7.0, 11);
    arch2.printInfo();

    cout << "Final results: " << endl;
    cout << "**************************************************" << endl;
    
    //Prints information for all objects

    cout << "Employees: " << endl;
    employee1.printInfo();
    cout << "--------------------------------------------------" << endl;
    employee2.printInfo();
    cout << "--------------------------------------------------" << endl;
    employee3.printInfo();
    cout << "--------------------------------------------------" << endl;
    employee4.printInfo();
    cout << "--------------------------------------------------" << endl;


    cout << "Programmers: " << endl;
    cout << "**************************************************" << endl;
    programmer1.printInfo();
    cout << "--------------------------------------------------" << endl;
    programmer2.printInfo();
    cout << "--------------------------------------------------" << endl;

    cout << "Software Architects: " << endl;
    cout << "**************************************************" << endl;
    arch1.printInfo();
    cout << "--------------------------------------------------" << endl;
    arch2.printInfo();
    cout << "--------------------------------------------------" << endl;

    


   
    return 0;
}