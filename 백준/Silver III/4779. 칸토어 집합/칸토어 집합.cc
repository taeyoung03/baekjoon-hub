#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void Cantor(string &str, int left, int right)
{
	if (right - left > 1)
	{
		int l = (right - left) / 3 + left, r = (right - left) * 2 / 3 + left;
		Cantor(str, left, l);
		Cantor(str, r, right);
		str.replace(l, r - l, r - l, ' ');
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	while (cin >> num)
	{
		string str = "-";
		for (int i = 1; i < pow(3, num); i++)
		{
			str.append("-");
		}
		Cantor(str, 0, str.length());
		cout << str << '\n';
	}
	return 0;
}