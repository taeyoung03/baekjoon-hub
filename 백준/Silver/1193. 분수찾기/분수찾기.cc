#include <iostream>
using namespace std;

int main(void) {
	int x, i;
	cin >> x;
	for (i = 1; i < x; i++)
		x -= i;
	if (i % 2 == 1) cout << i - x + 1 << "/" << x << endl;
	else cout << x << "/" << i - x + 1 << endl;
	return 0;
}