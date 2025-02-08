#include <iostream>

using namespace std;

int main() {
    int age_in_days, years, months, days;

    // Read the input value (age in days)
    cin >> age_in_days;

    // Calculate the number of years, months, and remaining days
    years = age_in_days / 365;
    age_in_days %= 365;
    months = age_in_days / 30;
    days = age_in_days % 30;

    // Print the result
    cout << years << " ano(s)" << endl;
    cout << months << " mes(es)" << endl;
    cout << days << " dia(s)" << endl;

    return 0;
}

