#include <iostream>
using namespace std;

int main(void) {
	int basket[100], n, m, i, j, tmp;
	cin >> n >> m;
	for (int idx = 0; idx < n; idx++)
		basket[idx] = idx + 1;
	for (int idx = 0; idx < m; idx++) {
		cin >> i >> j;
		tmp = basket[i - 1];
		basket[i - 1] = basket[j - 1];
		basket[j - 1] = tmp;
	}
	for (int idx = 0; idx < n; idx++)
		cout << basket[idx] << ' ';
}