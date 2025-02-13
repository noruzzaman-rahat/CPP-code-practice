#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    // Sorting in decreasing order
    if (B > A) swap(A, B);
    if (C > A) swap(A, C);
    if (C > B) swap(B, C);

    // Check if it forms a triangle
    if (A >= B + C) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        // Checking triangle types
        double A2 = A * A, B2 = B * B, C2 = C * C;

        if (A2 == B2 + C2) cout << "TRIANGULO RETANGULO" << endl;
        if (A2 > B2 + C2) cout << "TRIANGULO OBTUSANGULO" << endl;
        if (A2 < B2 + C2) cout << "TRIANGULO ACUTANGULO" << endl;
        if (A == B && B == C) cout << "TRIANGULO EQUILATERO" << endl;
        if ((A == B && A != C) || (A == C && A != B) || (B == C && B != A))
            cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}
