#include <iostream>
using namespace std;

int main() {
    int size = 5;

    
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    
    for (int i = size - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

