#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	set<string> set;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		if (str == "ENTER")
		{
			cnt += set.size();
			set.clear();
		}
		else
		{
			set.insert(str);
		}
	}
	cnt += set.size();

	cout << cnt;
	return 0;
}