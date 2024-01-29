#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, tmp;
	cin >> n;
	vector<int> cnt(10001);
	
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		cnt[tmp]++;
	}

	for (int i = 1; i < 10001; i++) {
		for (cnt[i]; cnt[i] > 0; cnt[i]--) {
			cout << i << '\n';
		}
	}
	return 0;
}