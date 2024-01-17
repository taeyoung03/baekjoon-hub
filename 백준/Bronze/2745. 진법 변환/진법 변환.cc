#include <iostream>
#include <string>
#include<cmath>
using namespace std;

int main(void) {
	string num;
	double formation; 
	int decimal = 0;
	cin >> num >> formation;
	for (int i = 0; i < num.length(); i++) {
		if (num[i] < 'A') decimal += (num[i] - '0') * pow(formation, num.length() - i - 1);
		else decimal += (num[i] - 'A' + 10) * pow(formation, num.length() - i - 1);
	}
	cout << decimal << endl;
	return 0;
}