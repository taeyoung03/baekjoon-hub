#include <iostream>
using namespace std;

bool isPrime(unsigned int num)
{
	if (num < 2)
	{
		return false;
	}
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
unsigned int findPrime(unsigned int num)
{
	while (1)
	{
		if (isPrime(num))
		{
			break;
		}
		else
		{
			num++;
		}
	}
	return num;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int testCase;
	cin >> testCase;
	for (int i = 0; i < testCase; i++)
	{
		unsigned int num;
		cin >> num;
		cout << findPrime(num) << '\n';
	}
	return 0;
}
