#include <iostream>
using namespace std;

int main(void) {
	int n, num, min, max;
	cin >> n;
	min = 1000000;
	max = -1000000;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num < min) min = num;
		if (num > max) max = num;
	}
	cout << min << ' ' << max << endl;
}