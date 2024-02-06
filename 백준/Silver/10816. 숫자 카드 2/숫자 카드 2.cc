#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	map<int, int> map;
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		map[num]++;
	}

	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		cout << map[num] << ' ';
	}
	return 0;
}