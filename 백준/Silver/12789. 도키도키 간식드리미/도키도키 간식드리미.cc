#include <iostream>
#include <stack>
#include <queue>
using namespace std;

bool isPosible(queue<int> &q, stack<int> &s)
{
	int priority = 1;
	while (!q.empty() || !s.empty())
	{
		if (!q.empty() && q.front() == priority)
		{
			q.pop();
			priority++;
		}
		else if (!s.empty() && s.top() == priority)
		{
			s.pop();
			priority++;
		}
		else if (!q.empty() && q.front() != priority)
		{
			if (s.empty() || q.front() < s.top())
			{
				s.push(q.front());
				q.pop();
			}
			else
			{
				return false;
			}
		}
	}
	return true;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	queue<int> q;
	stack<int> s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		q.push(num);
	}
	if (isPosible(q, s))
	{
		cout << "Nice";
	}
	else
	{
		cout << "Sad";
	}
	return 0;
}