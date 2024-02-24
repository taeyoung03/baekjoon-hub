#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int DP(int size) {
	vector<int> v(size + 1);
	for (int i = 1; i <= size; i++)
		cin >> v[i];

	vector<int> dp1(size + 1, 1);
	vector<int> dp2(size + 1, 1);
	for (int i = 1; i <= size; i++) {
		for (int j = 1; j < i; j++) {
			if (v[i] > v[j]) dp1[i] = max(dp1[i], dp1[j] + 1);
			if (v[size - i + 1] > v[size - j + 1]) dp2[size - i + 1] = max(dp2[size - i + 1], dp2[size - j + 1] + 1);
		}
	}

	int max_len = 0;
	for (int i = 1; i <= size; i++) 
		if (dp1[i] + dp2[i] - 1 > max_len) max_len = dp1[i] + dp2[i] - 1;
	return max_len;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int size;
	cin >> size;
	cout << DP(size);
	return 0;
}