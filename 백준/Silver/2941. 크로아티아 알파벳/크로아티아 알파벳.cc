#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str;
	string croatian[8] = { "c=", "c-","dz=","d-","lj","nj","s=","z=" };
	cin >> str;
	for (int i = 0; i < 8; i++) {
		while (1) {
			int idx = str.find(croatian[i]);
			if (idx == string::npos) break;
			else str.replace(idx, croatian[i].length(), "@");
		}
	}
	cout << str.length() << endl;
	return 0;
}