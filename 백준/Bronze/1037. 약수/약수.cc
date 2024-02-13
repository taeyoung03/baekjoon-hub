#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	int min = 1000000, max = 2;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		if (num < min)
		{
			min = num;
		}
		if (num > max)
		{
			max = num;
		}
	}
	cout << min * max;
	return 0;
}