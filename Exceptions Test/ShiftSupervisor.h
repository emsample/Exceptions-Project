#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "Employee.h"

class ShiftSupervisor : public Employee
{
private:
    double annualSalary;
    double annualBonus;

public:
    // PRE: none
    // POST: salary=0, bonus=0
    ShiftSupervisor();

    // PRE: salary >= 0, bonus >= 0
    // POST: initialized with given values
    ShiftSupervisor(string n, int num, string date, double salary, double bonus);

    // PRE: salary >= 0
    // POST: annualSalary updated
    void setAnnualSalary(double salary);

    // PRE: bonus >= 0
    // POST: annualBonus updated
    void setAnnualBonus(double bonus);

    // PRE: none
    // POST: returns salary
    double getAnnualSalary() const;

    // PRE: none
    // POST: returns bonus
    double getAnnualBonus() const;

    // PRE: none
    // POST: prints employee + supervisor data
    void printShiftSupervisor() const;
};

#endif
