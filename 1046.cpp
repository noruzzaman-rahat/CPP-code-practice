#include <iostream>
using namespace std;

void game_duration(int start, int end) {
    int duration;
    if (start == end) {
        duration = 24;
    } else if (start < end) {
        duration = end - start;
    } else {
        duration = (24 - start) + end;
    }

    cout << "O JOGO DUROU " << duration << " HORA(S)" << endl;
}

int main() {
    int start, end;
    cin >> start >> end;
    game_duration(start, end);
    return 0;
}

