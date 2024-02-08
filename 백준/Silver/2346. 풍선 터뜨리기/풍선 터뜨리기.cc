#include <iostream>
#include <deque>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	deque<pair<int, int>> deque;

	int size;
	cin >> size;
	for (int i = 1; i <= size; i++)
	{
		pair<int, int> balloon;
		balloon.first = i;
		cin >> balloon.second;
		deque.push_back(balloon);
	}

	int num = 1;
	while (!deque.empty())
	{
		if (num > 0)
		{
			for (int i = 1; i < num; i++)
			{
				deque.push_back(deque.front());
				deque.pop_front();
			}
			cout << deque.front().first << ' ';
			num = deque.front().second;
			deque.pop_front();
		}
		else
		{
			for (int i = 1; i < -num; i++)
			{
				deque.push_front(deque.back());
				deque.pop_back();
			}
			cout << deque.back().first << ' ';
			num = deque.back().second;
			deque.pop_back();
		}
	}
	return 0;
}