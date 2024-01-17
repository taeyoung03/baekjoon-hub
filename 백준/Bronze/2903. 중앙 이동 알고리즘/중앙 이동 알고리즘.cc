#include <iostream>
using namespace std;

int main(void) {
	int n, sum = 2;
	cin >> n;
	for (int i = 0; i < n; i++)
		sum = sum * 2 - 1;
	cout << sum * sum << endl;
	return 0;
}