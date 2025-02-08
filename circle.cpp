#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double R;
    const double PI = 3.14159;
    cin >> R;
    cout<<fixed;
    cout<<setprecision(4);
    double area = PI * R * R;
    cout << "A="  << area << endl;

    return 0;
}

