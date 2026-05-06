#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee
{
private:
    string name;
    int employeeNumber;
    string hireDate;

public:
    class InvalidEmployeeNumber {};
    Employee();
    Employee(string n, int num, string date);

    void setName(string n);
    void setEmployeeNumber(int num);
    void setHireDate(string date);

    string getName() const;
    int getEmployeeNumber() const;
    string getHireDate() const;

    void printEmployee() const;
};

#endif
