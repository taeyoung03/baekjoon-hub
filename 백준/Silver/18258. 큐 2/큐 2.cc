#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	queue<int> queue;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string command;
		cin >> command;
		if (command == "push")
		{
			int num;
			cin >> num;
			queue.push(num);
		}
		else if (command == "pop")
		{
			if (!queue.empty())
			{
				cout << queue.front() << '\n';
				queue.pop();
			}
			else
			{
				cout << -1 << '\n';
			}
		}
		else if (command == "size")
		{
			cout << queue.size() << '\n';
		}
		else if (command == "empty")
		{
			cout << queue.empty() << '\n';
		}
		else if (command == "front")
		{
			if (!queue.empty())
			{
				cout << queue.front() << '\n';
			}
			else
			{
				cout << -1 << '\n';
			}
		}
		else if (command == "back")
		{
			if (!queue.empty())
			{
				cout << queue.back() << '\n';
			}
			else
			{
				cout << -1 << '\n';
			}
		}
	}
	return 0;
}