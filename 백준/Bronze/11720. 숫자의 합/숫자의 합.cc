#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str;
	int n, sum = 0;
	cin >> n >> str;
	for (int i = 0; i < n; i++)
		sum += str[i] - '0';
	cout << sum << endl;
}