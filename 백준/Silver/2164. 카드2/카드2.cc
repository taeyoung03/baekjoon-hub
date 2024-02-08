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
	for (int i = 1; i <= n; i++)
	{
		queue.push(i);
	}

	while (queue.size() > 1)
	{
		queue.pop();
		queue.push(queue.front());
		queue.pop();
	}
	
	cout << queue.front();
	return 0;
}