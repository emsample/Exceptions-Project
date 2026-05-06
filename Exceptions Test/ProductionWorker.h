#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

class ProductionWorker : public Employee
{
private:
    int shift;
    double hourlyPayRate;

public:
    // PRE: none
    // POST: shift=1, hourlyPayRate=0
    ProductionWorker();

    // PRE: s is 1 or 2, rate >= 0
    // POST: object initialized with given values
    ProductionWorker(string n, int num, string date, int s, double rate);

    // PRE: s is 1 or 2
    // POST: shift updated
    void setShift(int s);

    // PRE: rate >= 0
    // POST: hourlyPayRate updated
    void setHourlyPayRate(double rate);

    // PRE: none
    // POST: returns shift
    int getShift() const;

    // PRE: none
    // POST: returns hourlyPayRate
    double getHourlyPayRate() const;

    // PRE: none
    // POST: prints employee + worker data
    void printProductionWorker() const;
};

#endif