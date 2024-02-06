#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<string> vec;
	map<string, int> map;

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string name;
		cin >> name;
		vec.push_back(name);
		map[name] = i;
	}
	for (int i = 0; i < m; i++) {
		string quiz;
		cin >> quiz;
		if (isdigit(quiz[0]))
			cout << vec[stoi(quiz) - 1] << '\n';
		else
			cout << map[quiz] + 1 << '\n';
	}
	return 0;
}