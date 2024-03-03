#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;

	int max_num = numeric_limits<int>::lowest();
	vector<int> v1(n + 1);
	vector<int> v2(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> v1[i];
		v2[i] = v2[i - 1] + v1[i];
		if (i >= k) max_num = max(max_num, v2[i] - v2[i - k]);
	}
	cout << max_num;
	return 0;
}