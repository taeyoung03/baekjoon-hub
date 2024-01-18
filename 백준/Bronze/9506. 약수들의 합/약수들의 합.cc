#include <iostream>
using namespace std;

int main(void) {
	int n, sum, cnt;
	while (1) {
		cin >> n;
		if (n == -1)
			return 0;
		sum = 0; 
		cnt = 0;
		int* arr = new int[n];
		for (int i = 1; i < n; i++) 
			if (n % i == 0) {
				sum += i;
				arr[cnt++] = i;
			}
		if (sum == n) {
			cout << n << " = ";
			for (int i = 0; i < cnt; i++) {
				cout << arr[i];
				if (i < cnt - 1)
					cout << " + ";
			}
			cout << endl;
		}
		else
			cout << n << " is NOT perfect." << endl;
	}
}