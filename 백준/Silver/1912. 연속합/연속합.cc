#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int GetMax(vector<int> sequence_vec, vector<int> sum_vec, int size) {
	sum_vec.push_back(sequence_vec.front());
	int max_sum = sum_vec.back();
	for (int i = 1; i < size; i++) {
		sum_vec.push_back(max(sum_vec[i - 1] + sequence_vec[i], sequence_vec[i]));
		max_sum = max(max_sum, sum_vec.back());
	}
	return max_sum;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int size;
	vector<int> seqeunce_vec, sum_vec;
	cin >> size;
	for (int i = 0; i < size; i++) {
		int num;
		cin >> num;
		seqeunce_vec.push_back(num);
	}
	cout << GetMax(seqeunce_vec, sum_vec, size);
	return 0;
}
