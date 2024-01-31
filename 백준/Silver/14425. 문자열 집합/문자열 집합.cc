#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<string> v;
	int n, m, cnt = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		v.push_back(str);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < m; i++) {
		string str;
		cin >> str;
		if (binary_search(v.begin(), v.end(), str))
			cnt++;
	}

	cout << cnt;
	return 0;
}