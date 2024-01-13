#include <iostream>
using namespace std;

int main(void) {
	int arr[42] = { 0, }, cnt = 0, tmp;
	for (int i = 0; i < 10; i++) {
		cin >> tmp;
		arr[tmp % 42] = 1;
	}
	for (int i = 0; i < 42; i++)
		if (arr[i] == 1) cnt++;
	cout << cnt << endl;
}