#include <iostream>
#define MOD 1000000007
using namespace std;

long long Factorial(int n, int k) {
	long long ans = 1;
	for (int i = n; i > n - k; i--) {
		ans = ans * i % MOD;
	}
	return ans;
}

long long Power(int base, int expo) {
	if (expo == 1) {
		return base % MOD;
	}

	long long tmp = Power(base, expo / 2);
	if (expo % 2 == 0) {
		return tmp * tmp % MOD;
	}
	else {
		return tmp * tmp % MOD * base % MOD;
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n, k;
	cin >> n >> k;

	long long numerator = Factorial(n, k);
	long long denominator = Factorial(k, k);
	long long ans = numerator * Power(denominator, MOD - 2) % MOD;

	cout << ans;
	return 0;
}