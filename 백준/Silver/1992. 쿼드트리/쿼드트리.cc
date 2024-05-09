#include <iostream>
#include <string>
#define WHITE 0
#define BLACK 1
#define MAX_SIZE 64
using namespace std;

string video[MAX_SIZE];

void SetArray(int size) {
	for (int i = 0; i < size; i++) {
		cin >> video[i];
	}
}

void CompressVideo(int size, int row, int col) {
	char color = video[row][col];
	for (int i = row; i < row + size; i++) {
		for (int j = col; j < col + size; j++) {
			if (video[i][j] != color) {
				cout << "(";
				CompressVideo(size / 2, row, col);
				CompressVideo(size / 2, row, col + size / 2);
				CompressVideo(size / 2, row + size / 2, col);
				CompressVideo(size / 2, row + size / 2, col + size / 2);
				cout << ")";
				return;
			}
		}
	}
	cout << color;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	SetArray(n);
	CompressVideo(n, 0, 0);
	return 0;
}