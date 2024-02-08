#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	queue<int> queue;

	int n, k;
	cin >> n >> k;
	
	for (int i = 1; i <= n; i++)
	{
		queue.push(i);
	}

	cout << '<';
	for (int i = 1; queue.size(); i++)
	{
		if (i % k == 0)
		{
			cout << queue.front();
			if (queue.size() > 1)
			{
				cout << ", ";
			}
		}
		else
		{
			queue.push(queue.front());
		}
		queue.pop();
	}
	cout << '>';
	return 0;
}