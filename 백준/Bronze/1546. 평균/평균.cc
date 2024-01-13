#include <iostream>
using namespace std;

int main(void) {
	int n;
	double arr[1000], max = 0, sum = 0, avg;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] > max) max = arr[i];
	}
	for (int i = 0; i < n; i++) {
		arr[i] = arr[i] / max * 100;
		sum += arr[i];
	}
	avg = sum / n;
	cout << avg << endl;
}