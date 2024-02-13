#include <iostream>
using namespace std;

int Factorial(int num)
{
	int res = 1;
	for (int i = 1; i <= num; i++)
	{
		res *= i;
	}
	return res;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;
	cout << Factorial(n) / (Factorial(k) * Factorial(n - k));
	return 0;
}