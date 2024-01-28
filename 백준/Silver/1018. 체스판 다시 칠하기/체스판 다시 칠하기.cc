#include <iostream>
using namespace std;

int main(void) {
	int row, col, min = 64;
	cin >> row >> col;

	char** board = new char* [row];
	for (int i = 0; i < row; i++)
		board[i] = new char[col];

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			cin >> board[i][j];

	for (int i = 0; i <= row - 8; i++) {
		for (int j = 0; j <= col - 8; j++) {
			int cnt1 = 0, cnt2 = 0;
			for (int k = i; k < i + 8; k++) {
				for (int l = j; l < j + 8; l++) {
					if ((k + l) % 2 == 0) {
						if (board[k][l] == 'B') cnt1++;
						else cnt2++;
					}
					else {
						if (board[k][l] == 'W') cnt1++;
						else cnt2++;
					}
				}
			}
			if (cnt1 < min)
				min = cnt1;
			if (cnt2 < min)
				min = cnt2;
		}
	}

	cout << min << endl;
	return 0;
}