#include <iostream>

using namespace std;


void zigZagMatrix(int matrix[][3], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			
			if (i%2==0) {
				cout << " " << matrix[i][j];
			}else if (i % 2 == 1) {
				cout << " " << matrix[i][n-j-1];
			}
			
			if (j == n - 1) {
				cout << endl;
			}
		}
	}
	

}

int main()
{

	const int n = 3;

	int matrix[n][n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Enter element:";
			cin >> matrix[i][j];
		}
	}
	zigZagMatrix(matrix, n);
}

