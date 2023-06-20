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
    employee employee3("Stephen Colbert","12346","40","310-555-5555","M","Comedian","70,123","05/08/2015");
    
   
    return 0;
}