#include <iostream>
using namespace std;

int main(void) {
	int n, five, three, sum, min;
	cin >> n;
	min = n;

	for (five = 0; five <= n / 5; five++) {
		for (three = 0; three <= n / 3; three++) {
			if (five * 5 + three * 3 == n) {
				sum = five + three;
				if (sum < min) {
					min = sum;
				}
			}
		}
	}

	if (min == n)
		cout << -1 << endl;
	else
		cout << min << endl;
	return 0;
}