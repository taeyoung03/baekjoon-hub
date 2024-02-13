#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int testCase;
	cin >> testCase;
	for (int i = 0; i < testCase; i++)
	{
		int n, m;
		cin >> n >> m;
		long long res = 1;
		int tmp = 1;
		for (int j = 1; j <= n; j++)
		{
			res *= m--;
			res /= tmp++;
		}
		cout << res << '\n';
	}
	return 0;
}