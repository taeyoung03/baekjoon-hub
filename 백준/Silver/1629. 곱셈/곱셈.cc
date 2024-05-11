#include <iostream>
using namespace std;

long long a, b, c, tmp;

long long power(int b) {
	if (b == 1) {
		return a % c;
	}
	
	tmp = power(b / 2);
	if (b % 2 == 0) {
		return tmp * tmp % c;
	}
	else {
		return tmp * tmp % c * a % c;
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> a >> b >> c;
	cout << power(b);
	return 0;
}