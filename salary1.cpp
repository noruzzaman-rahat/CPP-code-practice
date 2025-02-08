#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name;
    double salary, total_sales;

    cin >> name;
    cin >> salary;
    cin >> total_sales;
    cout<<fixed;
    cout<<setprecision(2);

    double total_salary = salary + (total_sales * 0.15);

    cout << "TOTAL = R$ "<< total_salary << endl;

    return 0;
}

