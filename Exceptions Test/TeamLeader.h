#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker
{
private:
    double monthlyBonus;
    int requiredTrainingHours;
    int attendedTrainingHours;

public:
    // PRE: none
    // POST: all values set to 0
    TeamLeader();

    // PRE: s is 1 or 2, rate >= 0, bonus >= 0
    // POST: object initialized with given values
    TeamLeader(string n, int num, string date, int s, double rate,
        double bonus, int requiredHours, int attendedHours);

    // PRE: bonus >= 0
    // POST: monthlyBonus updated
    void setMonthlyBonus(double bonus);

    // PRE: hours >= 0
    // POST: requiredTrainingHours updated
    void setRequiredTrainingHours(int hours);

    // PRE: hours >= 0
    // POST: attendedTrainingHours updated
    void setAttendedTrainingHours(int hours);

    // PRE: none
    // POST: returns monthlyBonus
    double getMonthlyBonus() const;

    // PRE: none
    // POST: returns requiredTrainingHours
    int getRequiredTrainingHours() const;

    // PRE: none
    // POST: returns attendedTrainingHours
    int getAttendedTrainingHours() const;

    // PRE: none
    // POST: prints all inherited + leader data
    void printTeamLeader() const;
};

#endif
