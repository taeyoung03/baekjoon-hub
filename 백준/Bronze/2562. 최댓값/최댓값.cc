#include <iostream>
using namespace std;

int main(void) {
	int num, max = 0, index;
	for (int i = 0; i < 9; i++) {
		cin >> num;
		if (num > max) {
			max = num;
			index = i + 1;
		}
	}
	cout << max << endl << index << endl;
}