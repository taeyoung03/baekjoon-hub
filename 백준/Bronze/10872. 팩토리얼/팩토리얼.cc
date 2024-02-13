#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;

	int res = 1;
	for (int i = 1; i <= num; i++)
	{
		res *= i;
	}
	cout << res;
	return 0;
}