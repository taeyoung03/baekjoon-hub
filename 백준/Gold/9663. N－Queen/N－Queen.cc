#include <iostream>
#include <vector>
#include <cmath>
#define MAX 15
using namespace std;

int N, cnt = 0;
vector<int> col(MAX);

bool isPlaceable(int row){
	for (int i = 0; i < row; i++) {
		if (col[row] == col[i] || abs(col[row] - col[i]) == row - i) {
			return false;
		}
	}
	return true;
}

void NQueen(int row) {
	if (row == N) {
		cnt++;
		return;
	}
	else {
		for (int i = 0; i < N; i++) {
			col[row] = i;
			if (isPlaceable(row)) {
				NQueen(row + 1);
			}
		}
	}
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;
	NQueen(0);
	cout << cnt;
	return 0;
}