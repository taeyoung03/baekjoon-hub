#include <iostream>
#include <string>
#include<cmath>
using namespace std;

int main(void) {
	int input, formation, quotient, remainder, i;
	int* ans = new int[sizeof(int)];
	cin >> input >> formation;
	quotient = input;
	for (i = 0; quotient > 0; quotient /= formation) {
		ans[i++] = quotient % formation;
	}
	for (i; i > 0; i--) {
		if (ans[i - 1] < 10) cout << ans[i - 1];
		else cout << static_cast<char>(ans[i - 1] - 10 + 'A');
	}
	return 0;
}