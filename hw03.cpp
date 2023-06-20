#include<iostream>
#include<iomanip>
#include <string>
#include "date.h"
#include "employee.h"
#include "softwareArch.h"
#include "programmer.h"
using namespace std;

int main()
{
    employee employee1;
    testFunction(employee1);
    employee employee2("Stephen Colbert","12346","40","310-555-5555","M","Comedian","70,123","05/08/2015");
    cout << "Printing Employee 2 information." << endl;
    employee2.printInfo();
    
    employee employee3("James Cordon","87654","37","703-703-1234","M","Talk Show Host","900,000","12/25/2014");
    cout << "Printing Employee 3 information." << endl;
    employee3.printInfo();

    employee employee4("Katie Couric","77777","58","203-555-6789","F","News Reporter","500,500","03/01/2005");
    cout << "Printing Employee 4 information. " << endl;
    employee4.printInfo();

    programmer programmer1;
    testFunction(programmer1);
    programmer programmer2("Mary Coder","65432","28","310-555-5555","F","Programmer","770,123","02/08/2010","6543222","Mary Leader", 7, 'Y', 'Y');
    programmer2.printInfo();

    softwareArch arch1;
    testFunction(arch1);
    softwareArch arch2;
    arch2("Sally Designer","87878","38","310-555-8888","F","Architect","870,123","02/08/2003","6543422","Mary Big Boss", 7, 11);
    arch2.printInfo();

    cout << "Final results: " << endl;

    cout << "Programmers: " << endl;
    employee1.printInfo();
    employee2.printInfo();
    employee3.printInfo();
    employee4.printInfo();

    cout << "Programmers: " << endl;
    programmer1.printInfo();
    programmer2.printInfo();

    cout << "Software Architects: " << endl;
    arch1.printInfo();
    arch2.printInfo();

    


   
    return 0;
}