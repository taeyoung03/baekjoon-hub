#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int m, n, sum = 0;
	vector<int> vec;

	cin >> m >> n;

	for (int i = m; i <= n; i++) {
		int cnt = 0;
		for (int j = 1; j <= i; j++) 
			if (i % j == 0)
				cnt++;
		if (cnt == 2)
			vec.push_back(i);
	}

	if (vec.size() == 0)
		cout << -1 << endl;
	else {
		for (int i = 0; i < vec.size(); i++) 
			sum += vec[i];
		cout << sum << endl << vec.front() << endl;
	}

	return 0;
}