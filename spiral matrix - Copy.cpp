#include <iostream>
using namespace std;

int main() {
    int rows = 4, cols = 4;
    int matrix[rows][cols];

    int top = 0, left = 0, bottom = rows - 1, right = cols - 1;
    int num = 1;

    while (top <= bottom && left <= right) {
        for (int i = right; i >= left; i--) {
            matrix[top][i] = num++;
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            matrix[i][left] = num++;
        }
        left++;

        for (int i = left; i <= right; i++) {
            matrix[bottom][i] = num++;
        }
        bottom--;

        for (int i = bottom; i >= top; i--) {
            matrix[i][right] = num++;
        }
        right--;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

