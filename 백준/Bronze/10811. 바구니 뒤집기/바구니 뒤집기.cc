#include <iostream>
using namespace std;

void swap(int* i, int* j) {
	int tmp = *i;
	*i = *j;
	*j = tmp;
}

int main(void) {
	int arr[100], n, m, i, j, tmp;
	cin >> n >> m;
	for (int idx = 0; idx < n; idx++)
		arr[idx] = idx + 1;
	for (int idx = 0; idx < m; idx++) {
		cin >> i >> j;
		while (i <= j)
			swap(arr[i++ - 1], arr[j-- - 1]);
	}
	for (int idx = 0; idx < n; idx++)
		cout << arr[idx] << ' ';
}