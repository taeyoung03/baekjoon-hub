#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str;
	int cnt[26] = { 0, }, idx, max = 0, maxCnt = 0, maxPos;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		idx = str[i] < 'a' ? str[i] - 'A' : str[i] - 'a';
		if (++cnt[idx] > max) max = cnt[idx];
	}
	for (int i = 0; i < 26 && maxCnt < 2; i++)
		if (cnt[i] == max) {
			maxCnt++;
			maxPos = i;
		}
	if (maxCnt > 1) cout << "?" << endl;
	else cout << static_cast<char>(maxPos + 'A') << endl;
	return 0;
}