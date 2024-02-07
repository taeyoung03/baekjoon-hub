#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num1, num2;
	cin >> num1 >> num2;

	if (num2 < 2)
	{
		return 0;
	}
	if (num1 < 2)
	{
		num1 = 2;
	}

	vector<bool> eratos(num2 + 1, true);
	for (int i = 2; i * i <= num2; i++)
	{
		if (eratos[i])
		{
			for (int j = i * i; j <= num2; j += i)
			{
				eratos[j] = false;
			}
		}
	}

	for (int i = num1; i <= num2; i++)
	{
		if (eratos[i])
		{
			cout << i << ' ';
		}
	}
	return 0;
}
