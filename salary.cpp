#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int employee_number, worked_hours;
    double hourly_wage, salary;


    cin >> employee_number >> worked_hours >> hourly_wage;


    salary = worked_hours * hourly_wage;


    cout << "NUMBER = " << employee_number << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;

    return 0;
}
