#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int n = 5;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                cout << numbers[j] << " ";
            }
        } else {
            for (int j = n - 1; j >= 0; j--) {
                cout << numbers[j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

