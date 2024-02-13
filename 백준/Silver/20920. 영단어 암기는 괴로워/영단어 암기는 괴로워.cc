#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool compare(pair<string, int> p1, pair<string, int> p2)
{
	if (p1.second == p2.second && p1.first.length() == p2.first.length())
	{
		return p1.first < p2.first;
	}
	else if (p1.second == p2.second)
	{
		return p1.first.length() > p2.first.length();
	}
	else
	{
		return p1.second > p2.second;
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	map<string, int> map;
	for (int i = 0; i < n; i++)
	{
		string word;
		cin >> word;
		if (word.length() >= m)
		{
			auto it = map.find(word);
			if (it == map.end())
			{
				map[word] = 1;
			}
			else
			{
				it->second++;
			}
		}
	}

	vector<pair<string, int>> vec;
	for (auto it = map.begin(); it != map.end(); it++)
	{
		vec.push_back({it->first, it->second});
	}
	sort(vec.begin(), vec.end(), compare);

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i].first << '\n';
	}
	return 0;
}