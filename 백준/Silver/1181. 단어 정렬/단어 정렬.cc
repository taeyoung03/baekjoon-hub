#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string s1, string s2) {
	if (s1.length() == s2.length())
		return s1 < s2;
	else
		return s1.length() < s2.length();
}

int main(void) {
	vector<string> v;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if(find(v.begin(), v.end(), str)==v.end())
			v.push_back(str);
	}
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\n';
	return 0;
}