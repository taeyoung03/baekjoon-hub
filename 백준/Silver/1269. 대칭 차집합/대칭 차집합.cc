#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> a, b;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		a.push_back(num);
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		b.push_back(num);
	}
	sort(b.begin(), b.end());

	vector<int> res(a.size() + b.size());
	auto it = set_symmetric_difference(a.begin(), a.end(), b.begin(), b.end(), res.begin());
	res.erase(it, res.end());

	cout << res.size();
	return 0;
}