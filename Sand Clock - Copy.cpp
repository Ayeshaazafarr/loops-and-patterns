#include <iostream>
using namespace std;

int main() {
    int size = 5;

    // Upper half of the sand clock
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i - 1; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * (size - i) + 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the sand clock
    for (int i = 1; i <= size - 1; i++) {
        for (int j = 1; j <= size - i - 1; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i + 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

