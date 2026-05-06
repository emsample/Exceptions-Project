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

int main()
{
   
}