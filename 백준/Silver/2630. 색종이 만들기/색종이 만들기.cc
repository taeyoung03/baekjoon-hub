#include <iostream>
#define BLUE true
#define WHITE false
using namespace std;

bool square[128][128];
int cnt_white = 0, cnt_blue = 0;

void SetArray(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> square[i][j];
		}
	}
}

bool IsDone(int row, int col, int size) {
	bool color = square[row][col];
	for (int i = row; i < row + size; i++) {
		for (int j = col; j < col + size; j++) {
			if (square[i][j] != color) {
				return false;
			}
		}
	}
	return true;
}

void DivideAndConquer(int row, int col, int size) {
	if (IsDone(row, col, size)) {
		if (square[row][col] == BLUE) {
			cnt_blue++;
		}
		else {
			cnt_white++;
		}
	}
	else {
		DivideAndConquer(row, col, size / 2);
		DivideAndConquer(row + size / 2, col, size / 2);
		DivideAndConquer(row, col + size / 2, size / 2);
		DivideAndConquer(row + size / 2, col + size / 2, size / 2);
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	SetArray(n);
	DivideAndConquer(0, 0, n);
	cout << cnt_white << '\n' << cnt_blue;
	return 0;
}