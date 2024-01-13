#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string num1, num2;
	cin >> num1 >> num2;
	swap(num1[0], num1[2]);
	swap(num2[0], num2[2]);
	cout << (num1.compare(num2) > 0 ? num1 : num2) << endl;
}