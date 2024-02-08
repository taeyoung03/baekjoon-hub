#include <iostream>
#include <deque>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	deque<int> deque;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int command;
		cin >> command;
		switch (command)
		{
		case 1:
			int front;
			cin >> front;
			deque.push_front(front);
			break;
		case 2:
			int back;
			cin >> back;
			deque.push_back(back);
			break;
		case 3:
			if (!deque.empty())
			{
				cout << deque.front() << '\n';
				deque.pop_front();
			}
			else
			{
				cout << -1 << '\n';
			}
			break;
		case 4:
			if (!deque.empty())
			{
				cout << deque.back() << '\n';
				deque.pop_back();
			}
			else
			{
				cout << -1 << '\n';
			}
			break;
		case 5:
			cout << deque.size() << '\n';
			break;
		case 6:
			cout << deque.empty() << '\n';
			break;
		case 7:
			if (!deque.empty())
			{
				cout << deque.front() << '\n';
			}
			else
			{
				cout << -1 << '\n';
			}
			break;
		case 8:
			if (!deque.empty())
			{
				cout << deque.back() << '\n';
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