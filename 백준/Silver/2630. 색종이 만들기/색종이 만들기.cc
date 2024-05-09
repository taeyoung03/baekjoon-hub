#include <iostream>
#define BLUE true
#define WHITE false
#define MAX_SIZE 128
using namespace std;

bool square[MAX_SIZE][MAX_SIZE];
int cnt_white = 0, cnt_blue = 0;

void SetArray(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> square[i][j];
		}
	}
}

void DivideAndConquer(int size, int row, int col) {
	bool color = square[row][col];

	for (int i = row; i < row + size; i++) {
		for (int j = col; j < col + size; j++) {
			if (square[i][j] != color) {
				DivideAndConquer(size / 2, row, col);
				DivideAndConquer(size / 2, row, col + size / 2);
				DivideAndConquer(size / 2, row + size / 2, col);
				DivideAndConquer(size / 2, row + size / 2, col + size / 2);
				return;
			}
		}
	}

	if (color == BLUE) {
		cnt_blue++;
	}
	else {
		cnt_white++;
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	SetArray(n);
	DivideAndConquer(n, 0, 0);
	cout << cnt_white << '\n' << cnt_blue;
	return 0;
}