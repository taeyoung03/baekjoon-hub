#include <iostream>
using namespace std;

int Fibonacci(int num)
{
	if (num == 0 || num == 1)
	{
		return num;
	}
	else
	{
		return Fibonacci(num - 1) + Fibonacci(num - 2);
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long num;
	cin >> num;
	cout << Fibonacci(num);
	return 0;
}