#include <iostream>
using namespace std;

int main(void) {
	int n, sum, i, j, ans = 0;
	cin >> n;

	for (i = 0; i < n; i++) {
		sum = i;
		for (j = i; j > 0; j /= 10) 
			sum += j % 10;
		if (sum == n) {
			ans = i;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}