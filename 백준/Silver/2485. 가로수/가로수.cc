#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int GCD(int a, int b)
{
	if (b == 0)
		return a;
	else
		return GCD(b, a % b);
}

int main(void)
{
	vector<int> pos;
	vector<int> dis;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int position;
		cin >> position;
		pos.push_back(position);
		if (i > 0)
		{
			dis.push_back(pos[i] - pos[i - 1]);
		}
	}

	int gcd = dis[0];
	for (int i = 1; i < dis.size(); i++)
	{
		gcd = GCD(dis[i], gcd);
	}

	int cnt = 0;
	for (int i = 1; i < pos.size(); i++)
	{
		cnt += (pos[i] - pos[i - 1]) / gcd - 1;
	}

	cout << cnt;
	return 0;
}