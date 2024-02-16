#include <iostream>
#include <vector>
#define MAX 9
using namespace std;

int n, m;
vector<int> vec(MAX);
void DFS(int depth)
{
	if (depth == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << vec[i] << ' ';
		}
		cout << '\n';
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			vec[depth] = i;
			DFS(depth + 1);
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;
	DFS(0);
	return 0;
}