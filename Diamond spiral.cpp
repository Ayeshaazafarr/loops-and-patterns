#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int num = 1;

   
    for (int i = 1; i <= n; i++) {
       
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

       
        cout << num++;

        
        if (i > 1) {
            for (int j = 1; j <= (i - 1) * 2 - 1; j++) {
                cout << " ";
            }
            cout << num++;
        }

       
        cout << endl;
    }

    
    num = 1; 
    for (int i = n - 1; i >= 1; i--) {
       
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        
        cout << num++;

       
        if (i > 1) {
            for (int j = 1; j <= (i - 1) * 2 - 1; j++) {
                cout << " ";
            }
            cout << num++;
        }

       
        cout << endl;
    }

    return 0;
}

