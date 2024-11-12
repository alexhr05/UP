#include <iostream>

using namespace std;


void printMainSecondDiagonal(int matrix[][3], int n) {

	cout << "Main Diagonal:" << endl;

	for (int i = 0; i < n; i++) {
			cout << " " << matrix[i][i];	
	
	}
	cout << endl;

	cout << "Second Diagonal:" << endl;


	for (int i = 0; i < n; i++) {			
		cout << " " << matrix[i][n-i-1];
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
	printMainSecondDiagonal(matrix, n);
}

