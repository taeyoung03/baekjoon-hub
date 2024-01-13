#include <iostream>
using namespace std;

int main(void) {
	int arr[10000], n, x;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] < x) cout << arr[i] << ' ';
	}
}