#include <iostream>
using namespace std;

int main(void) {
	int n, k, i = 1 , ans = 0;
	cin >> n >> k;
	while (k) {
		if (i > n) {
			cout << 0 << endl;
			return 0;
		}
		else if (n % i == 0) {
			ans = i;
			k--;
		}
		i++;
	}
	cout << ans << endl;
	return 0;
}