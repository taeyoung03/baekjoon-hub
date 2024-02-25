#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int DP(int n, int k) {
	vector<vector<int>> dp(n + 1, vector<int>(k + 1));
	vector<pair<int, int>> v(n + 1);
	for (int i = 1; i <= n; i++)
		cin >> v[i].first >> v[i].second;
	for (int i = 1; i <= n; i++) 
		for (int j = 1; j <= k; j++) {
			if (v[i].first <= j) dp[i][j] = max(dp[i - 1][j - v[i].first] + v[i].second, dp[i - 1][j]);
			else dp[i][j] = dp[i - 1][j];
		}
	return dp[n][k];
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;
	cout << DP(n, k);
	return 0;
}