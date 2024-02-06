#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	set<string> s;
	vector<string> v;

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string name;
		cin >> name;
		s.insert(name);
	}

	int cnt = 0;
	for (int i = 0; i < m; i++) {
		string name;
		cin >> name;
		if (s.find(name) != s.end()) {
			v.push_back(name);
			cnt++;
		}
	}
	sort(v.begin(), v.end());

	cout << cnt << '\n';
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
	return 0;
}