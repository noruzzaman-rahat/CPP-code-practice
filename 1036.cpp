#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double A, B, C;


    cin >> A >> B >> C;


    if (A == 0 || (B * B - 4 * A * C) < 0) {
        cout << "Impossivel calcular" << endl;
    } else {

        double discriminant = B * B - 4 * A * C;

        // Calculate the two roots using Bhaskara's formula
        double R1 = (-B + sqrt(discriminant)) / (2 * A);
        double R2 = (-B - sqrt(discriminant)) / (2 * A);


        cout << fixed << setprecision(5);
        cout << "R1 = " << R1 << endl;
        cout << "R2 = " << R2 << endl;
    }

    return 0;
}
