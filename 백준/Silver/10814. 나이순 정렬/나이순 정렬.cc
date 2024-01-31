#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(pair<int, string> p1, pair<int, string> p2) {
	return p1.first < p2.first;
}

int main(void) {
	int n, i, j;
	vector<pair<int, string>> v;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int age;
		string name;
		cin >> age >> name;
		v.push_back({ age,name });
	}

	stable_sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++) 
		cout << v[i].first << ' ' << v[i].second << '\n';
	return 0;
}