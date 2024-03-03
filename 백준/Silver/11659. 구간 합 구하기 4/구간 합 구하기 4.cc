#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<int> v1(n + 1);
	vector<int> v2(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> v1[i];
		v2[i] = v2[i - 1] + v1[i];
	}

	for (int k = 0; k < m; k++) {
		int i, j;
		cin >> i >> j;
		cout << v2[j] - v2[i - 1] << '\n';
	}
	return 0;
}