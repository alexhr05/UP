#include <iostream>

using namespace std;


int minElMAtrix(int matrix[][3], int n) {
    int minEl = matrix[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] < minEl) {
                minEl = matrix[i][j];
            }
        }
    }
    return minEl;
}


int main()
{

    const int n = 3;

    int matrix[n][n];

    for (int i = 0; i < n;i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter element:";
            cin >> matrix[i][j];
        }
    }
    cout << "Minimum element:" << minElMAtrix(matrix, n);
}

