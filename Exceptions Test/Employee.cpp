#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee()
{
    name = "";
    employeeNumber = 0;
    hireDate = "";
}
Employee::Employee(string n, int num, string date)
{
    name = n;
    setEmployeeNumber(num);
    hireDate = date;
}

// PRE: none
// POST: name updated
void Employee::setName(string n)
{
    name = n;
}

// PRE: num >= 0
// POST: employeeNumber updated
void Employee::setEmployeeNumber(int num)
{
    if (num < 0 || num > 9999)
        throw Employee::InvalidEmployeeNumber();

    employeeNumber = num;
}

// PRE: none
// POST: hireDate updated
void Employee::setHireDate(string date)
{
    hireDate = date;
}

// PRE: none
// POST: returns name
string Employee::getName() const
{
    return name;
}

// PRE: none
// POST: returns employeeNumber
int Employee::getEmployeeNumber() const
{
    return employeeNumber;
}

// PRE: none
// POST: returns hireDate
string Employee::getHireDate() const
{
    return hireDate;
}

// PRE: none
// POST: prints employee info
void Employee::printEmployee() const
{
    cout << "Name: " << name << endl;
    cout << "Employee Number: " << employeeNumber << endl;
    cout << "Hire Date: " << hireDate << endl;
}