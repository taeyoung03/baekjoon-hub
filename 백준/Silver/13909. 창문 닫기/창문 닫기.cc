#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num, cnt = 0;
	cin >> num;
	for (int i = 1; i * i <= num; i++)
	{
		cnt++;
	}
	cout << cnt;
	return 0;
}