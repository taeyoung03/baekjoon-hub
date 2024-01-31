#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	vector<int> src, cpy;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		src.push_back(tmp);
		cpy.push_back(tmp);
	}

	sort(cpy.begin(), cpy.end());
	cpy.erase(unique(cpy.begin(), cpy.end()), cpy.end());

	for (int i = 0; i < n; i++) 
		cout << lower_bound(cpy.begin(), cpy.end(), src[i]) - cpy.begin() << ' ';
	cout << '\n';
	return 0;
}