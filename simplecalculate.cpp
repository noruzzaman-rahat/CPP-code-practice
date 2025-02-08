#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Declaring variables
    int code1, units1, code2, units2;
    double price1, price2, total;

    // Reading input values
    cin >> code1 >> units1 >> price1;
    cin >> code2 >> units2 >> price2;

    // Calculating total amount to be paid
    total = (units1 * price1) + (units2 * price2);

    // Printing the output with fixed decimal places
    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;

    return 0;
}

