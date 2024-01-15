#include <iostream>
using namespace std;

int main(void) {
	int arr[6] = { 1,1,2,2,2,8 }, tmp;
	for (int i = 0; i < 6; i++) {
		cin >> tmp;
		arr[i] = arr[i] - tmp;
		cout << arr[i] << ' ';
	}
}