#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    int columns = 7; 

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            if (j == 1 || j == 3 || j == 5 || j == 7) { 
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

