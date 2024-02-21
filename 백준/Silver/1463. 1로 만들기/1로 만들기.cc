#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(int num) {
	vector<int> v;
	v.push_back(0);
	v.push_back(0);
	v.push_back(1);
	v.push_back(1);
	for (int i = 4; i <= num; i++) {
		int min_cnt = v[i - 1] + 1;
		if (i % 2 == 0) min_cnt = min(min_cnt, v[i / 2] + 1);
		if (i % 3 == 0) min_cnt = min(min_cnt, v[i / 3] + 1);
		v.push_back(min_cnt);
	}
	return v[num];
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;
	solve(num);
	cout << solve(num);
	return 0;
}