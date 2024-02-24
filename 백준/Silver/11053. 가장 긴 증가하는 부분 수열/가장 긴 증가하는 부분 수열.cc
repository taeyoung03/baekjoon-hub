#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int DP(int size) {
	vector<int> v(size + 1);
	for (int i = 1; i <= size; i++)
		cin >> v[i];

	int max_len = 0;
	vector<int> dp(size + 1, 1);
	for (int i = 1; i <= size; i++) {
		for (int j = 1; j < i; j++)
			if (v[i] > v[j]) dp[i] = max(dp[i], dp[j] + 1);
		max_len = max(max_len, dp[i]);
	}
	return max_len;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int size;
	cin >> size;
	cout << DP(size);
	return 0;
}