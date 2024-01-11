#include <iostream>
using namespace std;

int main(void) {
	int T, num1, num2;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> num1 >> num2;
		cout << num1 + num2 << endl;
	}
}