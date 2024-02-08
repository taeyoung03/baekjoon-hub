#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	deque<int> deq;
	vector<bool> isQue;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		bool isStack;
		cin >> isStack;
		isQue.push_back(!isStack);
	}

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		if (isQue[i])
		{
			deq.push_front(num);
		}
	}

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		deq.push_back(num);
		cout << deq.front() << ' ';
		deq.pop_front();
	}
	return 0;
}