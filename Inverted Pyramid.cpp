#include <iostream>
using namespace std;

int main() {
    int height;

    for (int i = height; i >= 1; i--) {
        for (int j = 1; j <= height - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

