#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int numbers[3];

    // Read three integers from input
    for(int i = 0; i < 3; i++) {
        cin >> numbers[i];
    }

    // Copy original numbers
    int original[3];
    for(int i = 0; i < 3; i++) {
        original[i] = numbers[i];
    }

    // Sort the numbers in ascending order
    sort(numbers, numbers + 3);

    // Print sorted numbers
    for(int i = 0; i < 3; i++) {
        cout << numbers[i] << endl;
    }

    // Print a blank line
    cout << endl;

    // Print numbers in the original order
    for(int i = 0; i < 3; i++) {
        cout << original[i] << endl;
    }

    return 0;
}

