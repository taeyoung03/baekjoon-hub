#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	set<string, greater<string>> s;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string name, state;
		cin >> name >> state;
		if (state == "enter")
			s.insert(name);
		else
			s.erase(name);
	}
	
	for (auto it = s.begin(); it != s.end(); it++)
		cout << *it << "\n";
	return 0;
}