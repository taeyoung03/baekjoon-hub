#include <iostream>
#include <vector>
using namespace std;

vector<int> vec;
int GetCount(int num) {
	vec.push_back(1);
	vec.push_back(2);
	for (int i = 2; i < num; i++) {
		vec.push_back((vec[i - 2] + vec[i - 1]) % 15746);
	}
	return vec[num - 1];
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;
	cout << GetCount(num);
	return 0;
}