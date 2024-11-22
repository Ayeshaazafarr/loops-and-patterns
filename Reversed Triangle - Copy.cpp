#include <iostream>
using namespace std;

int main() {
    int size = 5;

    for (int i = size; i >= 1; i--) {
        for (int j = size; j >= i; j--) {
            cout << j; 
        }
        cout << endl;  
    }

    return 0;
}

