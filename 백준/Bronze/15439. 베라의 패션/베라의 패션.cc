#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;
	cout << num * (num - 1);
	return 0;
}