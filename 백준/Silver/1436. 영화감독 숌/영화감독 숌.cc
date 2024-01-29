#include <iostream>
using namespace std;

int main(void) {
	int n, ans = 0, cnt = 0;
	cin >> n;

	while (cnt != n) {
		ans++;
		int tmp = ans;
		while (tmp) {
			if (tmp % 1000 == 666) {
				cnt++;
				break;
			}
			else 
				tmp /= 10;
		}
	}

	cout << ans;
	return 0;
}