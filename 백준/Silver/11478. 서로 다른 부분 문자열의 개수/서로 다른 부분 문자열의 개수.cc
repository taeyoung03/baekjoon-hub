#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	set<string> s;

	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
		for (int j = 0; j < str.length(); j++)
			s.insert(str.substr(i, j));

	cout << s.size();
	return 0;
}