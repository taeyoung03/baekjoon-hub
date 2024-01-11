#include <iostream>
using namespace std;

int main(void) {
	int x, n, a, b, sum = 0;
	cin >> x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		sum += a * b;
	}
	if (sum == x) cout << "Yes" << endl;
	else cout << "No" << endl;
}