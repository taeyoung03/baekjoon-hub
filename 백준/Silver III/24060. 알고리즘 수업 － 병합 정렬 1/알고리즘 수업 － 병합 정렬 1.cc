#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int cnt = 0, num = -1;
queue<int> que;
void merge(vector<int> &vec, int left, int middle, int right, int k)
{
	int i = left, j = middle + 1;
	while (i <= middle && j <= right)
	{
		if (vec[i] <= vec[j])
		{
			que.push(vec[i++]);
		}
		else
		{
			que.push(vec[j++]);
		}
	}
	while (i <= middle)
	{
		que.push(vec[i++]);
	}
	while (j <= right)
	{
		que.push(vec[j++]);
	}
	i = left;
	int t = 0;
	while (i <= right)
	{
		cnt++;
		if (cnt == k)
		{
			num = que.front();
			return;
		}
		else
		{
			vec[i++] = que.front();
			que.pop();
		}
	}
}
void merge_sort(vector<int> &vec, int left, int right, int k)
{
	if (left < right)
	{
		int middle = (left + right) / 2;
		merge_sort(vec, left, middle, k);
		merge_sort(vec, middle + 1, right, k);
		merge(vec, left, middle, right, k);
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;

	vector<int> vec;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		vec.push_back(num);
	}
	merge_sort(vec, 0, n - 1, k);
	cout << num;
	return 0;
}