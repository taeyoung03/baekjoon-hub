#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int DP() {
	string s1, s2;
	cin >> s1 >> s2;

	vector<vector<int>> dp(s1.length() + 1, vector<int>(s2.length() + 1));
	for (int i = 1; i <= s1.length(); i++)
		for (int j = 1; j <= s2.length(); j++) {
			if (s1[i - 1] == s2[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	return dp[s1.length()][s2.length()];
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cout << DP();
	return 0;
}