#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 10000
using namespace std;

int DP(int n) {
	vector<int> v(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> v[i];
	}

	vector<int> dp(MAX + 1);
	int max_point = dp[1] = v[1];
	if (n >= 2) max_point =  dp[2] = v[1] + v[2];
	for (int i = 3; i <= n; i++) {
		int point = max(dp[i - 1], max(dp[i - 2] + v[i], dp[i - 3] + v[i - 1] + v[i]));
		dp[i] = point;
		if (point > max_point) max_point = point;
	}
	return max_point;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	cout << DP(n);
	return 0;
}