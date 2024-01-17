#include <iostream>
using namespace std;

int main(void) {
	int n, r = 1, cnt = 1;
	cin >> n;
	for (int i = 2; i <= n; i += 6 * r++, cnt++);
	cout << cnt << endl;
	return 0;
}