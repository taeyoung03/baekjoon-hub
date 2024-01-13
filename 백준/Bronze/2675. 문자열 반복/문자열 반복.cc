#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str;
	int t, r;
	cin >> t;
	while (t--) {
		cin >> r >> str;
		for (int i = 0; i < str.length(); i++)
			for (int j = 0; j < r; j++)
				cout << str[i];
		cout << endl;
	}
}