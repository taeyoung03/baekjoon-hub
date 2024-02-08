#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isVPS(string input)
{
	stack<char> stack;
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == '(')
			stack.push(input[i]);
		else
		{
			if (!stack.empty() && stack.top() == '(')
				stack.pop();
			else
				return false;
		}
	}
	if (stack.empty())
		return true;
	else
		return false;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int testCase;
	cin >> testCase;
	for (int i = 0; i < testCase; i++)
	{
		string input;
		cin >> input;
		stack<char> stack;
		if (isVPS(input))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}