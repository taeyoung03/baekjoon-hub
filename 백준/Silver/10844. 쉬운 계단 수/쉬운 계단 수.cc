#include <iostream>
#define MOD 1000000000
using namespace std;

int solve(int n) {
	int dp[101][10] = { 0, };
	for (int i = 1; i <= 9; i++)
		dp[1][i] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j == 0) dp[i][j] = dp[i - 1][j + 1] % MOD;
			else if (j == 9) dp[i][j] = dp[i - 1][j - 1] % MOD;
			else dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % MOD;
		}
	}
	int sum = 0;
	for (int i = 0; i <= 9; i++)
		sum = (sum + dp[n][i]) % MOD;
	return sum;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	cout << solve(n);
	return 0;
}