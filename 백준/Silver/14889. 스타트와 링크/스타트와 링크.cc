#include <iostream>
#include <vector>
#include <cmath>
#define MAX 20
using namespace std;

int g_size = 0, g_min = 200, arr[MAX][MAX];
vector<bool> is_visited(MAX);

void SetArray(int size) {
	g_size = size;
	for (int i = 0; i < g_size; i++) {
		for (int j = 0; j < g_size; j++) {
			cin >> arr[i][j];
		}
	}
}
void GetMin(int depth, int idx) {
	if (depth == g_size / 2) {
		int sum_stat_start = 0, sum_stat_link = 0, diff = 0;
		for (int i = 0; i < is_visited.size(); i++) {
			for (int j = 0; j < is_visited.size(); j++) {
				if (is_visited[i] && is_visited[j]) {
					sum_stat_start += arr[i][j];
				}
				else if (!is_visited[i] && !is_visited[j]) {
					sum_stat_link += arr[i][j];
				}
			}
		}
		diff = abs(sum_stat_link - sum_stat_start);
		if (diff < g_min) {
			g_min = diff;
		}
	}
	else {
		for (int i = idx; i < g_size; i++) {
			if (!is_visited[i]) {
				is_visited[i] = true;
				GetMin(depth + 1, i + 1);
				is_visited[i] = false;
			}
		}
	}
}


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int size;
	cin >> size;
	SetArray(size);
	GetMin(0, 0);
	cout << g_min;
	return 0;
}