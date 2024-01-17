#include <iostream>
using namespace std;

int main(void) {
	int arr[9][9], row, col, max = -1;
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (arr[i][j] > max) {
				max = arr[i][j];
				row = i + 1;
				col = j + 1;
			}
		}
	cout << max << endl;
	cout << row << ' ' << col << endl;
	return 0;
}