#include <iostream>
#include <vector>
using namespace std;

void Eratos(vector<bool> &eratos)
{
	for (int i = 2; i * i < eratos.size(); i++)
	{
		if (eratos[i])
		{
			for (int j = i * i; j < eratos.size(); j += i)
			{
				eratos[j] = false;
			}
		}
	}
}
int Goldbach(vector<bool> &eratos)
{
	int cnt = 0;
	for (int i = 2; i <= eratos.size() / 2; i++)
	{
		if (eratos[i] && eratos[eratos.size() - i - 1])
		{
			cnt++;
		}
	}
	return cnt;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int testCase;
	cin >> testCase;
	for (int i = 0; i < testCase; i++)
	{
		int num;
		cin >> num;
		vector<bool> eratos(num + 1, true);
		Eratos(eratos);
		cout << Goldbach(eratos) << '\n';
	}
	return 0;
}