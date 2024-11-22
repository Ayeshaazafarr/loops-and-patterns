#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int num = 1; 

    for (int i = 1; i <= n; i++) {
       
        for (int j = 1; j <= i; j++) {
            cout << num;
            num++;

             
            if (j < i) {
                for (int gap = 1; gap <= (i - j) * 2 - 1; gap++) {
                    cout << " ";
                }
            }
        }

        
        cout << endl;
    }

    return 0;
}

