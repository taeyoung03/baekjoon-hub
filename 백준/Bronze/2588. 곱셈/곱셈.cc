#include <iostream>
using namespace std;

class Mul {
private:
	int num1, num2;
public:
	Mul(int n1, int n2) : num1(n1), num2(n2) {}
	int firstCalculate() const {
		return num1 * (num2 % 10);
	}
	int secondCalculate() const {
		return num1 * (num2 % 100 - num2 % 10) / 10;
	}
	int thirdCalculate() const {
		return num1 * (num2 - num2 % 100) / 100;
	}
	int findAnswer() const {
		return firstCalculate() + secondCalculate() * 10 + thirdCalculate() * 100;
	}
};

int main(void) {
	int num1, num2;
	cin >> num1;
	cin >> num2;
	Mul mul(num1, num2);
	cout << mul.firstCalculate() << endl;
	cout << mul.secondCalculate() << endl;
	cout << mul.thirdCalculate() << endl;
	cout << mul.findAnswer() << endl;
}