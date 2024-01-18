#include <iostream>
using namespace std;

int main(void) {
	int n, cnt;
	cin >> n;

	for (int i = 2; i <= n; i++) {
		while (n % i == 0) {
			n /= i;
			cout << i << endl;
		}
	}

	return 0;
}