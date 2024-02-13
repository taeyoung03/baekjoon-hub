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
	set.insert("ChongChong");
	for (int i = 0; i < n; i++)
	{
		string name1, name2;
		cin >> name1 >> name2;
		if (set.find(name1) != set.end() || set.find(name2) != set.end())
		{
			set.insert(name1);
			set.insert(name2);
		}
	}

	cout << set.size();
	return 0;
}