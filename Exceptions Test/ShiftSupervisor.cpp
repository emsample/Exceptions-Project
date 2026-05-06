#include <iostream>
#include <iomanip>
#include "ShiftSupervisor.h"
using namespace std;

// PRE: none
// POST: salary=0, bonus=0
ShiftSupervisor::ShiftSupervisor() : Employee()
{
    annualSalary = 0.0;
    annualBonus = 0.0;
}

// PRE: salary >= 0, bonus >= 0
// POST: fields initialized
ShiftSupervisor::ShiftSupervisor(string n, int num, string date, double salary, double bonus)
    : Employee(n, num, date)
{
    annualSalary = salary;
    annualBonus = bonus;
}

// PRE: salary >= 0
// POST: annualSalary updated
void ShiftSupervisor::setAnnualSalary(double salary)
{
    annualSalary = salary;
}

// PRE: bonus >= 0
// POST: annualBonus updated
void ShiftSupervisor::setAnnualBonus(double bonus)
{
    annualBonus = bonus;
}

// PRE: none
// POST: returns salary
double ShiftSupervisor::getAnnualSalary() const
{
    return annualSalary;
}

// PRE: none
// POST: returns bonus
double ShiftSupervisor::getAnnualBonus() const
{
    return annualBonus;
}

// PRE: none
// POST: prints employee + supervisor data
void ShiftSupervisor::printShiftSupervisor() const
{
    printEmployee();

    cout << fixed << setprecision(2);
    cout << "Annual Salary: $" << annualSalary << endl;
    cout << "Annual Bonus: $" << annualBonus << endl;
}