#include <iostream>
using namespace std;

int main() {
    int rows = 5, cols = 5;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if ((i + j) % 2 == 0) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    
    return 0;
}

