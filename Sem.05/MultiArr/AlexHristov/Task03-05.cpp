#include <iostream>

using namespace std;

//ZAD 3
//void zigZagMatrix(int matrix[][3], int n) {
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			
//			if (i%2==0) {
//				cout << " " << matrix[i][j];
//			}else if (i % 2 == 1) {
//				cout << " " << matrix[i][n-j-1];
//			}
//			
//			if (j == n - 1) {
//				cout << endl;
//			}
//		}
//	}
//	
//
//}
//ZAD 4
//bool isTriangleMatrix(int matrix[][3], int n) {
//	bool zeroUnderMainDiagonal = true;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (i>j && matrix[i][j]!=0) {
//				zeroUnderMainDiagonal = false;
//				break;
//			}
//		}
//	}
//
//	return zeroUnderMainDiagonal;
//	
//
//}

void TransposedМаtrix(int matrix[][3], int n) {
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n/2; j++) {
			int temp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = temp;
		}
	}


}

void test(const int matrix[][3]) {
	matrix[0][0];
}

void test2(int num) {
	num++;
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

	test(matrix);
	cout << matrix[0][0];

	//ZAD 3
	//zigZagMatrix(matrix, n);

	//ZAD 4
	//if (isTriangleMatrix(matrix,n)) {
	//	cout << "1";
	//}
	//else {
	//	cout << "0";
	//}
	
	//ZAD 5
	//TransposedМаtrix(matrix, n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << " " << matrix[i][j];

		}
		cout << endl;
	}

}

