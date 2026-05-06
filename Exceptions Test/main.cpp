#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
using namespace std;

void getEmployeeData(string& name, int& number, string& hireDate)
{
    cout << "Enter employee name: ";
    getline(cin, name);

    while (true)
    {
        try
        {
            cout << "Enter employee number (0-9999): ";
            cin >> number;
            cin.ignore();

            Employee temp;
            temp.setEmployeeNumber(number);

            break;
        }
        catch (Employee::InvalidEmployeeNumber)
        {
            cout << "ERROR: Employee number must be between 0 and 9999." << endl;
            cout << "Please re-enter a valid employee number." << endl;
        }
    }

    cout << "Enter hire date: ";
    getline(cin, hireDate);
}

void createProductionWorker()
{
    string name, hireDate;
    int number, shift;
    double payRate;

    getEmployeeData(name, number, hireDate);

    ProductionWorker worker;
    worker.setName(name);
    worker.setEmployeeNumber(number);
    worker.setHireDate(hireDate);

    while (true)
    {
        try
        {
            cout << "Enter shift (1=Day, 2=Night): ";
            cin >> shift;
            worker.setShift(shift);
            break;
        }
        catch (ProductionWorker::InvalidShift)
        {
            cout << "Invalid shift. Try again.\n";
        }
    }

    while (true)
    {
        try
        {
            cout << "Enter hourly pay rate: ";
            cin >> payRate;
            cin.ignore();

            worker.setHourlyPayRate(payRate);
            break;
        }
        catch (ProductionWorker::InvalidPayRate)
        {
            cout << "Invalid pay rate. Try again.\n";
        }
    }

    cout << "\nEmployee created:\n";
    worker.printProductionWorker();
}
void createShiftSupervisor()
{
    string name, hireDate;
    int number;
    double salary, bonus;

    getEmployeeData(name, number, hireDate);

    cout << "Enter annual salary: ";
    cin >> salary;

    cout << "Enter annual bonus: ";
    cin >> bonus;
    cin.ignore();

    ShiftSupervisor s(name, number, hireDate, salary, bonus);

    cout << "\nEmployee created:\n";
    s.printShiftSupervisor();
}
void createTeamLeader()
{
    string name, hireDate;
    int number, shift, req, att;
    double payRate, bonus;

    getEmployeeData(name, number, hireDate);

    TeamLeader t;
    t.setName(name);
    t.setEmployeeNumber(number);
    t.setHireDate(hireDate);

    while (true)
    {
        try
        {
            cout << "Enter shift (1=Day, 2=Night): ";
            cin >> shift;
            t.setShift(shift);
            break;
        }
        catch (ProductionWorker::InvalidShift)
        {
            cout << "Invalid shift. Try again.\n";
        }
    }

    while (true)
    {
        try
        {
            cout << "Enter hourly pay rate: ";
            cin >> payRate;
            t.setHourlyPayRate(payRate);
            break;
        }
        catch (ProductionWorker::InvalidPayRate)
        {
            cout << "Invalid pay rate. Try again.\n";
        }
    }

    cout << "Enter monthly bonus: ";
    cin >> bonus;

    cout << "Enter required training hours: ";
    cin >> req;

    cout << "Enter attended training hours: ";
    cin >> att;
    cin.ignore();

    t.setMonthlyBonus(bonus);
    t.setRequiredTrainingHours(req);
    t.setAttendedTrainingHours(att);

    cout << "\nEmployee created:\n";
    t.printTeamLeader();
}
int main()
{
   
}