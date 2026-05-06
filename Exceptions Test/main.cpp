#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
using namespace std;

int main()
{
    cout << "EMPLOYEE CLASS TESTS" << endl;
    Employee e("John Smith", 1001, "01/15/2022");
    e.setName("John Smith");
    e.setEmployeeNumber(1001);
    e.setHireDate("01/15/2022");
    cout << "Testing accessors:" << endl;
    cout << "Name: " << e.getName() << endl;
    cout << "Employee Number: " << e.getEmployeeNumber() << endl;
    cout << "Hire Date: " << e.getHireDate() << endl;
    cout << "Testing printEmployee(): " << endl;
    e.printEmployee();
    cout << "Testing mutators:" << endl;
    cout << "EXPECTED OUTPUT:" << endl;
    cout << "Name: Updated Name\nEmployee Number: 9999\nHire Date: 12/31/2023" << endl;
    e.setName("Updated Name");
    e.setEmployeeNumber(9999);
    e.setHireDate("12/31/2023");
    cout << "OUTPUT: " << endl;
    e.printEmployee();

    cout << endl << "PRODUCTIONWORKER CLASS TESTS - DAY SHIFT" << endl;
    ProductionWorker dayWorker("Maria Lopez", 2001, "03/12/2021", 1, 22.50);
    cout << "Testing printProductionWorker(), which calls printEmployee():" << endl;
    dayWorker.printProductionWorker();

    cout << endl << "PRODUCTIONWORKER CLASS TESTS - NIGHT SHIFT" << endl;
    ProductionWorker nightWorker("David Brown", 2002, "07/08/2020", 2, 25.75);
    cout << "Testing printProductionWorker(), which calls printEmployee():" << endl;
    nightWorker.printProductionWorker();

    cout << endl << "SHIFTSUPERVISOR CLASS TESTS" << endl;
    ShiftSupervisor supervisor("Linda Johnson", 3001, "11/02/2019", 62500.00, 4500.00);
    cout << "Testing printShiftSupervisor(), which calls printEmployee():" << endl;
    supervisor.printShiftSupervisor();
    
    cout << endl << "TEAMLEADER CLASS TESTS" << endl;
    TeamLeader leader("Robert Davis", 4001, "05/20/2018", 1, 28.75, 850.00, 40, 36);
    cout << "Testing printTeamLeader(), which calls printProductionWorker():" << endl;
    leader.printTeamLeader();
   
    return 0;
}