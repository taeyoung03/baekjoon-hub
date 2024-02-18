#include <iostream>
#include <vector>
using namespace std;

int g_cnt_recursion = 0, g_cnt_dynamic = 0;
int Recursion(int num) {
	if (num == 1 || num == 2) {
		g_cnt_recursion++;
		return 1;
	}
	return Recursion(num - 2) + Recursion(num - 1);
}
void Dynamic(int num) {
	vector<int> dynamic;
	dynamic.push_back(1);
	dynamic.push_back(1);
	for (int i = 2; i < num; i++) {
		dynamic.push_back(dynamic[i - 2] + dynamic[i - 1]);
		g_cnt_dynamic++;
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;
	Recursion(num);
	Dynamic(num);
	cout << g_cnt_recursion << ' ' << g_cnt_dynamic;
	return 0;
}