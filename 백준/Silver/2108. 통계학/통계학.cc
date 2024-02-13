#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int sum = 0;
	vector<int> vec;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		vec.push_back(num);
		sum += num;
	}
	sort(vec.begin(), vec.end());

	int key = vec.front(), cnt = 0, max = 0;
	vector<int> mode;
	while (1)
	{
		cnt = upper_bound(vec.begin(), vec.end(), key) - lower_bound(vec.begin(), vec.end(), key);
		if (cnt > max)
		{
			mode.clear();
			mode.push_back(key);
			max = cnt;
		}
		else if (cnt == max)
		{
			mode.push_back(key);
		}
		if (upper_bound(vec.begin(), vec.end(), key) == vec.end())
		{
			break;
		}
		else
		{
			key = vec[upper_bound(vec.begin(), vec.end(), key) - vec.begin()];
		}
	}

	double mean = round(static_cast<double>(sum) / n);
	int median = vec[vec.size() / 2],
		range = vec.back() - vec.front();

	cout << (mean == 0 ? abs(mean) : mean) << '\n';
	cout << median << '\n';
	cout << (mode.size() > 1 ? mode[1] : mode[0]) << '\n';
	cout << range << '\n';
	return 0;
}