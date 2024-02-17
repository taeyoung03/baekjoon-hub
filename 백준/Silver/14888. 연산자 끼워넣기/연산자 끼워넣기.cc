#include <iostream>
#include <vector>
using namespace std;

int g_ans = 0, g_min = 1000000000, g_max = -1000000000;
vector<int> g_num_vec;
vector<int> g_operator_vec;
vector<int> g_order_vec;

void SetNumVec(int size) {
	for (int i = 0; i < size; i++) {
		int num;
		cin >> num;
		g_num_vec.push_back(num);
	}
}
void SetOperatorVec() {
	for (int i = 0; i < 4; i++) {
		int num;
		cin >> num;
		g_operator_vec.push_back(num);
	}
}
void DFS(int depth) {
	if (depth == g_num_vec.size() - 1) {
		for (int i = 0; i < g_num_vec.size(); i++) {
			if (i == 0) {
				g_ans = g_num_vec[i];
			}
			else {
				switch (g_order_vec[i - 1]) {
				case 0:
					g_ans += g_num_vec[i];
					break;
				case 1:
					g_ans -= g_num_vec[i];
					break;
				case 2:
					g_ans *= g_num_vec[i];
					break;
				case 3:
					g_ans /= g_num_vec[i];
					break;
				}
			}
		}
		if (g_ans < g_min) {
			g_min = g_ans;
		}
		if (g_ans > g_max) {
			g_max = g_ans;
		}
	}
	else {
		for (int j = 0; j < g_operator_vec.size(); j++) {
			if (g_operator_vec[j] > 0) {
				g_order_vec.push_back(j);
				g_operator_vec[j]--;
				DFS(depth + 1);
				g_order_vec.pop_back();
				g_operator_vec[j]++;
			}
		}
	}
}


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	SetNumVec(n);
	SetOperatorVec();
	DFS(0);
	cout << g_max << ' ' << g_min;
	return 0;
}