#include <iostream>
#include <iomanip>
#include "TeamLeader.h"
using namespace std;

// PRE: none
// POST: all values = 0
TeamLeader::TeamLeader() : ProductionWorker()
{
    monthlyBonus = 0.0;
    requiredTrainingHours = 0;
    attendedTrainingHours = 0;
}

// PRE: s is 1 or 2, rate >= 0
// POST: fields initialized
TeamLeader::TeamLeader(string n, int num, string date, int s, double rate,
    double bonus, int requiredHours, int attendedHours)
    : ProductionWorker(n, num, date, s, rate)
{
    monthlyBonus = bonus;
    requiredTrainingHours = requiredHours;
    attendedTrainingHours = attendedHours;
}

// PRE: bonus >= 0
// POST: monthlyBonus updated
void TeamLeader::setMonthlyBonus(double bonus)
{
    monthlyBonus = bonus;
}

// PRE: hours >= 0
// POST: requiredTrainingHours updated
void TeamLeader::setRequiredTrainingHours(int hours)
{
    requiredTrainingHours = hours;
}

// PRE: hours >= 0
// POST: attendedTrainingHours updated
void TeamLeader::setAttendedTrainingHours(int hours)
{
    attendedTrainingHours = hours;
}

// PRE: none
// POST: returns monthlyBonus
double TeamLeader::getMonthlyBonus() const
{
    return monthlyBonus;
}

// PRE: none
// POST: returns requiredTrainingHours
int TeamLeader::getRequiredTrainingHours() const
{
    return requiredTrainingHours;
}

// PRE: none
// POST: returns attendedTrainingHours
int TeamLeader::getAttendedTrainingHours() const
{
    return attendedTrainingHours;
}

// PRE: none
// POST: prints all data
void TeamLeader::printTeamLeader() const
{
    printProductionWorker();

    cout << fixed << setprecision(2);
    cout << "Monthly Bonus: $" << monthlyBonus << endl;
    cout << "Required Training Hours: " << requiredTrainingHours << endl;
    cout << "Attended Training Hours: " << attendedTrainingHours << endl;
}