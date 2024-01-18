#include <iostream>
using namespace std;

int main(void) {
	int n, num, cnt;
	cin >> n;
	cnt = n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num == 1)
			cnt--;
		else {
			for (int j = 2; j < num; j++)
				if (num % j == 0) {
					cnt--;
					break;
				}
		}
	}
	cout << cnt << endl;
	return 0;
}