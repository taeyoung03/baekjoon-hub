#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2) {
	if (p1.second == p2.second)
		return p1.first < p2.first;
	else
		return p1.second < p2.second;
}

int main(void) {
	vector<pair<int, int>> v;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back({ x,y });
	}
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++) 
		cout << v[i].first << ' ' << v[i].second << '\n';
	return 0;
}