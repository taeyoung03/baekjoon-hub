#include <iostream>
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
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int a, b;
		cin >> a >> b;
		cout << a * b / GCD(a, b) << '\n';
	}
	return 0;
}