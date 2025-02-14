#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long a = 1, b = 1, c;

    if (N == 1 || N == 2) {
        cout << "1" << endl;
        return 0;
    }

    for (int i = 3; i <= N; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << b << endl;
    return 0;
}

