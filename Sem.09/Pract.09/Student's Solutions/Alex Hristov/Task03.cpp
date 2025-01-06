#include <iostream>

using namespace std;

int* putTwoArraysTogether(int* arr1, int* arr2, int n1, int n2) {
	if (arr1 == nullptr || arr2 == nullptr){
		return 0;
	}
	int result[MAX_SIZE];
	int index = 0;
	for (int i = 0; i < n1; i++) {
		result[index++] = arr1[i];
	}
	for (int j = 0; j < n2; j++) {
		result[index++] = arr1[j];
	}

	for (int i = 0; i < (n1+n2) - 1; i++) {
		for (int j = 0; j < (n1 + n2) - i - 1; j++) {
			if (result[j] > result[j + 1]) {
				int temp = result[j];
				result[j] = result[j + 1];
				result[j + 1] = temp;
			}
		}
	}

	return result;
}

int main()
{
	int arr1[MAX_SIZE];
	int arr2[MAX_SIZE];
	int n1,n2;
	cout << "Enter length for first array:";
	cin >> n1;
	cout << "Enter length for first array:";
	cin >> n2;

	cout << "Enter numbers for first array:"<<endl;
	for (int i = 0; i < n1; i++) {
		cin >> arr1[i];
	}
	cout << "Enter numbers for second array:" << endl;
	for (int i = 0; i < n2; i++) {
		cin >> arr2[i];
	}
	
	
	for (int i = 0; i < n1-1; i++) {
		for (int j = 0; j < n1-i-1; j++) {
			if (arr1[j] > arr1[j+1]) {
				int temp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = temp;
			}
			
		}
	}

	for (int i = 0; i < n1; i++) {
		cout << arr1[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < n2 - 1; i++) {
		for (int j = 0; j < n2 - i - 1; j++) {
			if (arr2[j] > arr2[j + 1]) {
				int temp = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n2; i++) {
		cout << arr2[i] << " ";
	}

	int* result = putTwoArraysTogether(arr1, arr2,n1,n2);
	cout << endl;
	for (int i = 0; i < (n1+n2); i++) {
		cout<<result[i]<<" ";
	}
}
