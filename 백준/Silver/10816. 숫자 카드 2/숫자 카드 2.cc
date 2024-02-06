#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v(20000000);
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if (num <= 0)
			num = -num;
		else
			num += 10000000;
		v[num]++;
	}

	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		if (num <= 0)
			num = -num;
		else
			num += 10000000;
		cout << v[num] << ' ';
	}
	return 0;
}