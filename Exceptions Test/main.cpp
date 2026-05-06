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
int main()
{
   
}