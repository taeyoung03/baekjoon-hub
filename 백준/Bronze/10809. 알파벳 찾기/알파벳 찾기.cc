#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str;
	cin >> str;
	for (char ascii = 'a'; ascii <= 'z'; ascii++)
		cout << static_cast<int>(str.find(ascii)) << ' ';
}