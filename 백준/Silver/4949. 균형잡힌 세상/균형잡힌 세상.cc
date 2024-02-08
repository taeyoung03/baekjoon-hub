#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isVPS(string input)
{
	stack<char> stack;
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == '(' || input[i] == '[')
		{
			stack.push(input[i]);
		}
		else
		{
			if (input[i] == ')')
			{
				if (!stack.empty() && stack.top() == '(')
				{
					stack.pop();
				}
				else
				{
					return false;
				}
			}
			if (input[i] == ']')
			{
				if (!stack.empty() && stack.top() == '[')
				{
					stack.pop();
				}
				else
				{
					return false;
				}
			}
		}
	}
	if (stack.empty())
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	while (1)
	{
		string input;
		getline(cin, input);
		if (input == ".")
		{
			return 0;
		}
		if (isVPS(input))
		{
			cout << "yes\n";
		}
		else
		{
			cout << "no\n";
		}
	}
}