#include <iostream>
using namespace std;

int main(void) {
	int n, k, i, j;
	cin >> n >> k;
	int* arr = new int[n];

	for (i = 0; i < n; i++)
		cin >> arr[i];

	for (i = 1; i < n; i++) {
		int tmp = arr[i];
		for (j = i - 1; j >= 0 && tmp < arr[j]; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = tmp;
	}

	cout << arr[n - k] << endl;
	return 0;
}