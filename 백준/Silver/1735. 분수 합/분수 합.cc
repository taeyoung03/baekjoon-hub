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

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	a = a * d + c * b;
	b = b * d;

	cout << a / GCD(a, b) << ' ' << b / GCD(a, b) << '\n';
	return 0;
}