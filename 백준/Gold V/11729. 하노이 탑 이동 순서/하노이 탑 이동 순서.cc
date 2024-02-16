#include <iostream>
#include <cmath>
using namespace std;

void Hanoi(int num, int from, int to, int tmp)
{
	if (num == 1)
	{
		cout << from << ' ' << to << '\n';
	}
	else
	{
		Hanoi(num - 1, from, tmp, to);
		cout << from << ' ' << to << '\n';
		Hanoi(num - 1, tmp, to, from);
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;
	cout << static_cast<int>(pow(2, num) - 1) << '\n';
	Hanoi(num, 1, 3, 2);
	return 0;
}