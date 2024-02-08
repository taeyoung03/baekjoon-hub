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
		int command;
		cin >> command;
		switch (command)
		{
		case 1:
			int num;
			cin >> num;
			stack.push(num);
			break;
		case 2:
			if (!stack.empty())
			{
				cout << stack.top() << '\n';
				stack.pop();
			}
			else
			{
				cout << -1 << '\n';
			}
			break;
		case 3:
			cout << stack.size() << '\n';
			break;
		case 4:
			cout << stack.empty() << '\n';
			break;
		case 5:
			if (!stack.empty())
			{
				cout << stack.top() << '\n';
			}
			else
			{
				cout << -1 << '\n';
			}
			break;
		}
	}
	return 0;
}