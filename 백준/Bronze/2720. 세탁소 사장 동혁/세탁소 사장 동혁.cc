#include <iostream>
using namespace std;

int main(void) {
	int change, t, arr[4] = { 25, 10, 5, 1 };
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> change;
		for (int j = 0; j < 4; j++) {
			cout << change / arr[j] << ' ';
			change %= arr[j];
		}
		cout << endl;
	}
}