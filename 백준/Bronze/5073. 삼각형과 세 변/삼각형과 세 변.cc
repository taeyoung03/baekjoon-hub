#include <iostream>
using namespace std;

int main(void) {
	int arr[3], max, sum;
	while (1) {
		max = sum = 0;
		for (int i = 0; i < 3; i++) {
			cin >> arr[i];
			sum += arr[i];
			if (arr[i] > max) max = arr[i];
		}
		if (sum == 0)
			break;
		else if (sum - 2 * max > 0) {
			if (arr[0] == arr[1] && arr[1] == arr[2]) cout << "Equilateral" << endl;
			else if (arr[0] == arr[1] || arr[1] == arr[2] || arr[2] == arr[0]) cout << "Isosceles " << endl;
			else cout << "Scalene" << endl;
		}
		else if(sum - 2 * max <= 0)
			cout << "Invalid" << endl;
	}
	return 0;
}