#include <iostream>
using namespace std;

int main(void) {
	int n, x, y, xMax = -10000, xMin = 10000, yMax = -10000, yMin = 10000;
	cin >> n;

	if (n == 1) {
		cin >> x >> y;
		cout << 0 << endl;
	}

	else {
		for (int i = 0; i < n; i++) {
			cin >> x >> y;
			if (x > xMax) xMax = x;
			if (x <= xMin) xMin = x;
			if (y > yMax) yMax = y;
			if (y <= yMin) yMin = y;
		}
		cout << (xMax - xMin) * (yMax - yMin) << endl;
	}

	return 0;
}