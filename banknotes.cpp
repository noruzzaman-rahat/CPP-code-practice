#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int denominations[] = {100, 50, 20, 10, 5, 2, 1};


    cout << N << endl;


    for (int i = 0; i < 7; i++) {
        int count = N / denominations[i];
        N %= denominations[i];
        cout << count << " nota(s) de R$ " << denominations[i] << ",00" << endl;
    }

    return 0;
}

