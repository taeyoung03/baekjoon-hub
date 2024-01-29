#include <iostream>
using namespace std;

int main(void) {
	int  i, j;
	double sum = 0;
	int* arr = new int[5];

	for (i = 0; i < 5; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	for (i = 1; i < 5; i++) {
		int tmp = arr[i];
		for (j = i - 1; j >= 0 && tmp < arr[j]; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = tmp;
	}

	cout << sum / 5 << endl << arr[2] << endl;
	return 0;
}