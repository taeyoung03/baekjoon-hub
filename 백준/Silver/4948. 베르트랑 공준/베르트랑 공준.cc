#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	while (1)
	{
		int num;
		cin >> num;
		if (num == 0)
		{
			return 0;
		}
		vector<bool> eratos(2 * num + 1, true);
		eratos[0] = eratos[1] = false;
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

		int cnt = 0;
		for (int i = num + 1; i < eratos.size(); i++)
		{
			if (eratos[i])
			{
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
}
