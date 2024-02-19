#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[501][501] = { 0, };

	int num;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> arr[i][j];
			arr[i][j] += max(arr[i - 1][j - 1], arr[i - 1][j]);
		}
	}

	int max = 0;
	for (int i = 1; i <= num; i++) 
		if (arr[num][i] > max) max = arr[num][i];

	cout << max;
	return 0;
}