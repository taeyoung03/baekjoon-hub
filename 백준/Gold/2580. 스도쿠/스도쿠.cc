#include <iostream>
#include <vector>
#define MAX 9
using namespace std;

int g_sudoku[MAX][MAX] = { 0, };
vector<pair<int, int>> g_to_be_solved;

void SetSudoku() {
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			cin >> g_sudoku[i][j];
			if (g_sudoku[i][j] == 0) {
				g_to_be_solved.push_back({ i,j });
			}
		}
	}
}
void ReadSudoku() {
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			cout << g_sudoku[i][j] << ' ';
		}
		cout << '\n';
	}
}
bool IsPlaceable(pair<int, int> pos) {
	for (int i = 0; i < MAX; i++) {
		if (i != pos.second && g_sudoku[pos.first][i] == g_sudoku[pos.first][pos.second]) {
			return false;
		}
		if (i != pos.first && g_sudoku[i][pos.second] == g_sudoku[pos.first][pos.second]) {
			return false;
		}
	}
	int row = pos.first - pos.first % 3;
	int col = pos.second - pos.second % 3;
	for (int i = row; i < row + 3; i++) {
		for (int j = col; j < col + 3; j++) {
			if (i != pos.first && j != pos.second && g_sudoku[i][j] == g_sudoku[pos.first][pos.second]) {
				return false;
			}
		}
	}
	return true;
}
bool SolveSudoku(int cnt_solved) {
	if (cnt_solved == g_to_be_solved.size()) {
		ReadSudoku();
		return true;
	}
	else {
		for (int i = 1; i <= 9; i++) {
			g_sudoku[g_to_be_solved[cnt_solved].first][g_to_be_solved[cnt_solved].second] = i;
			if (IsPlaceable(g_to_be_solved[cnt_solved])) {
				if (SolveSudoku(cnt_solved + 1)) {
					return true;
				}
			}
		}
		g_sudoku[g_to_be_solved[cnt_solved].first][g_to_be_solved[cnt_solved].second] = 0;
		return false;
	}
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	SetSudoku();
	SolveSudoku(0);
	return 0;
}