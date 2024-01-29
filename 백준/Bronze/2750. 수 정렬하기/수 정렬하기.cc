#include <iostream>
using namespace std;

int main(void) {
	int n, i, j;
	cin >> n;
	int* arr = new int[n + 1];

	for (i = 0; i < n; i++)
		cin >> arr[i];

	for (i = 1; i < n; i++) {
		int tmp = arr[i];
		for (j = i - 1; j >= 0 && tmp < arr[j]; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = tmp;
	}

	for (i = 0; i < n; i++)
		cout << arr[i] << endl;
	return 0;
}