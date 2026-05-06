#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"
using namespace std;

// PRE: none
// POST: shift=1, hourlyPayRate=0
ProductionWorker::ProductionWorker() : Employee()
{
    shift = 1;
    hourlyPayRate = 0.0;
}

// PRE: s is 1 or 2, rate >= 0
// POST: all fields initialized
ProductionWorker::ProductionWorker(string n, int num, string date, int s, double rate)
    : Employee(n, num, date)
{
    setShift(s);
    setHourlyPayRate(rate);
}

// PRE: s is 1 or 2
// POST: shift updated
void ProductionWorker::setShift(int s)
{
    if (s != 1 && s != 2)
        throw InvalidShift();
    shift = s;
}

// PRE: rate >= 0
// POST: hourlyPayRate updated
void ProductionWorker::setHourlyPayRate(double rate)
{
    if (rate < 0)
        throw InvalidPayRate();
    hourlyPayRate = rate;
}

// PRE: none
// POST: returns hourlyPayRate
double ProductionWorker::getHourlyPayRate() const
{
    return hourlyPayRate;
}

// PRE: none
// POST: prints employee + worker data
void ProductionWorker::printProductionWorker() const
{
    printEmployee();

    if (shift == 1) cout << "Shift: Day" << endl;
    else if (shift == 2) cout << "Shift: Night" << endl;

    cout << fixed << setprecision(2);
    cout << "Hourly Pay Rate: $" << hourlyPayRate << endl;
}