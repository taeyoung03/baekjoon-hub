#include <iostream>
#include <vector>
using namespace std;

vector<long long> vec;
long long Padovan(int num) {
	for (int i = 0; i < 3; i++) {
		vec.push_back(1);
	}
	for (int i = 3; i < num; i++) {
		vec.push_back(vec[i - 3] + vec[i - 2]);
	}
	return vec[num - 1];
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int testCase;
	cin >> testCase;
	for (int i = 0; i < testCase; i++) {
		vec.clear();
		int num;
		cin >> num;
		cout << Padovan(num) << '\n';
	}
	return 0;
}