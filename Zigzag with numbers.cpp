#include <iostream>
using namespace std;

int main() {
    int size = 5;
    
    for (int i = 1; i <= size; i++) {
        
        cout << i << " ";
        
       
        for (int j = 1; j <= 2 * (size - i) - 1; j++) {
            cout << "  ";
        }
        
       
        if (i != size) {
            cout << i << " ";
        }
        
        cout << endl;
    }

    return 0;
}

