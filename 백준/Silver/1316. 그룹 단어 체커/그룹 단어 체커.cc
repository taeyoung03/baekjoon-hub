#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str;
	int n, cnt;
	cin >> n;
	cnt = n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			int idx = str.find(str[j], j + 1);
			if (idx == string::npos || idx == j + 1) continue;
			else {
				cnt--;
				break;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}