#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;
	vector<vector<int>> v(str.length() + 1, vector<int>(26));
	for (int i = 1; i <= str.length(); i++) {
		for (int j = 0; j < 26; j++) {
			if (j == str[i - 1] - 'a') v[i][j] = v[i - 1][j] + 1;
			else v[i][j] = v[i - 1][j];
		}
	}

	int q;
	cin >> q;
	for (int k = 0; k < q; k++) {
		char alphabet;
		int i, j;
		cin >> alphabet >> i >> j;
		cout << v[j + 1][alphabet - 'a'] - v[i][alphabet - 'a'] << '\n';
	}
	return 0;
}