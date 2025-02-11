#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    double prices[] = {0, 4.00, 4.50, 5.00, 2.00, 1.50};
    double total = prices[x] * y;

    cout << "Total: R$ " << fixed << setprecision(2) << total << endl;
    return 0;
}
