#include <iostream>
using namespace std;

int main(void) {
	int basket[100], n, m, i, j, k;
	cin >> n >> m;
	for (int idx = 0; idx < n; idx++)
		basket[idx] = 0;
	for (int idx = 0; idx < m; idx++) {
		cin >> i >> j >> k;
		for (i; i <= j; i++)
			basket[i - 1] = k;
	}
	for (int idx = 0; idx < n; idx++)
		cout << basket[idx] << ' ';
}