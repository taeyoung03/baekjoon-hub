#include <iostream>
using namespace std;

long long int GCD(long long int a, long long int b)
{
	if (b == 0)
		return a;
	else
		return GCD(b, a % b);
}

int main(void)
{

	long long int a, b;
	cin >> a >> b;
	cout << a * b / GCD(a, b) << '\n';

	return 0;
}