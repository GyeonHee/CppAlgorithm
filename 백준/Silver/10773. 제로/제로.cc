#include <iostream>
#include <stack>

using namespace std;

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	
	stack<int> stack;
	int sum = 0;
	int n;
	cin >> n;

	while (n > 0)
	{
		int k;
		cin >> k;
		if (k == 0)
		{
			sum -= stack.top();
			stack.pop();
		}
		else
		{
			stack.push(k);
			sum += stack.top();
		}
		n--;
	}

	cout << sum;
}
