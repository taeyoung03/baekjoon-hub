#include <iostream>
using namespace std;

int main(void) {
	int n, i;
	cin >> n;
	for (i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) cout << " ";
		for (int k = 1; k <= 2 * i - 1; k++) cout << "*";
		cout << endl;
	}
	for (i = n - 1; i > 0; i--) {
		for (int j = 1; j <= n - i; j++) cout << " ";
		for (int k = 1; k <= 2 * i - 1; k++) cout << "*";
		cout << endl;
	}
	return 0;
}