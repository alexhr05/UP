#include <iostream>

using namespace std;

const int ARRAY1_SIZE = 2;

const int ARRAY2_SIZE = 2;

bool compareToArrays(int arr1[][ARRAY1_SIZE], int arr2[][ARRAY2_SIZE]) {
	if (arr1 == nullptr || arr2 == nullptr) {
		return 0;
	}

	bool isArraysEqual = true;
	if (ARRAY1_SIZE == ARRAY2_SIZE) {
		for (int i = 0; i < ARRAY2_SIZE; i++) {
			for (int j = 0; j < ARRAY2_SIZE; j++) {
				if (arr1[i][j] != arr2[i][j]) {
					return false;
				}
			}
		}
	}

	return true;
}

int main()
{
	int arr1[ARRAY1_SIZE][ARRAY1_SIZE];
	int arr2[ARRAY2_SIZE][ARRAY2_SIZE];

	cout << "Enter numbers for first array:" << endl;
	for (int i = 0; i < ARRAY1_SIZE; i++) {
		for (int j = 0; j < ARRAY1_SIZE; j++) {
			cin >> arr1[i][j];
		}
	}
	cout << "Enter numbers for second array:" << endl;
	for (int i = 0; i < ARRAY2_SIZE; i++) {
		for (int j = 0; j < ARRAY2_SIZE; j++) {
			cin >> arr2[i][j];
		}
	}

	
	if (compareToArrays(arr1, arr2)) {
		cout << "Two arrays are equal";
	}
	else {
		cout << "Two arrays are  NOT equal";
	}
	
}
