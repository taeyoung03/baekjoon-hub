#include <iostream>
#define MAX_SIZE 2187
using namespace std;

int arr[MAX_SIZE][MAX_SIZE];
int cnt_minus = 0, cnt_zero = 0, cnt_plus = 0;

void SetArray(int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cin >> arr[i][j];
		}
	}
}

void QuadTree(int size, int row, int col) {
	int num = arr[row][col];
	for (int i = row; i < row + size; i++) {
		for (int j = col; j < col + size; j++) {
			if (arr[i][j] != num) {
				QuadTree(size / 3, row, col);
				QuadTree(size / 3, row, col + size / 3);
				QuadTree(size / 3, row, col + size * 2 / 3);
				QuadTree(size / 3, row + size / 3, col);
				QuadTree(size / 3, row + size / 3, col + size / 3);
				QuadTree(size / 3, row + size / 3, col + size * 2 / 3);
				QuadTree(size / 3, row + size * 2 / 3, col);
				QuadTree(size / 3, row + size * 2 / 3, col + size / 3);
				QuadTree(size / 3, row + size * 2 / 3, col + size * 2 / 3);
				return;
			}
		}
	}
	switch (num) {
	case -1:
		cnt_minus++;
		break;
	case 0:
		cnt_zero++;
		break;
	case 1:
		cnt_plus++;
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	SetArray(n);
	QuadTree(n, 0, 0);
	cout << cnt_minus << '\n';
	cout << cnt_zero << '\n';
	cout << cnt_plus;
	return 0;
}