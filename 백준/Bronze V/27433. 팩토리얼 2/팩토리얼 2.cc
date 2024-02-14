#include <iostream>
using namespace std;

long long Factorial(long long num)
{
	if (num <= 1)
	{
		return 1;
	}
	return num * Factorial(num - 1);
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long num;
	cin >> num;
	cout << Factorial(num);
	return 0;
}