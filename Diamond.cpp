#include <iostream>
using namespace std;

int main() {
    int height = 9;

    for (int i = 1; i <= height / 2 + 1; i++) {
        for (int j = 1; j <= height / 2 + 1 - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = height / 2; i >= 1; i--) {
        for (int j = 1; j <= height / 2 + 1 - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

