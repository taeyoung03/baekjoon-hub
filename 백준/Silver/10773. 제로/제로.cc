#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	stack<int> stack;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		if (num)
		{
			stack.push(num);
		}
		else
		{
			stack.pop();
		}
	}

	int sum = 0;
	while (stack.size())
	{
		sum += stack.top();
		stack.pop();
	}

	cout << sum;
	return 0;
}