#include <iostream>
using namespace std;

int main(void) {
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	if (x2 == x3)
		cout << x1 << ' ';
	else if (x1 == x3)
		cout << x2 << ' ';
	else
		cout << x3 << ' ';
	if (y2 == y3)
		cout << y1 << ' ' << endl;
	else if (y1 == y3)
		cout << y2 << ' ' << endl;
	else
		cout << y3 << ' ' << endl;
	return 0;
}