#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> score_vec(1);
	int num;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		int score;
		cin >> score;
		score_vec.push_back(score);
	}

	vector<int> sum_vec(1);
	sum_vec.push_back(score_vec[1]);
	sum_vec.push_back(score_vec[1] + score_vec[2]);
	for (int i = 3; i <= num; i++) 
		sum_vec.push_back(max(sum_vec[i - 2] + score_vec[i], sum_vec[i - 3] + score_vec[i - 1] + score_vec[i]));
	cout << sum_vec.back();
	return 0;
}