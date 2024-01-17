#include <iostream>
using namespace std;

int main(void) {
	int a, b, v;
	cin >> a >> b >> v;
	if (a >= v) cout << 1 << endl;
	else if ((v - a) % (a - b)) cout << (v - a) / (a - b) + 2 << endl;
	else cout << (v - a) / (a - b) + 1 << endl;
	return 0;
}