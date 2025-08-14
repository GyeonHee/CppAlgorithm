#include <iostream>
#include <queue>
using namespace std;

int main()
{
	cin.tie(0);
	cin.sync_with_stdio(false);

	queue<int> q;
	
	int order;
	cin >> order;

	while (order > 0)
	{
		string s;
		cin >> s;
		if (s == "push")
		{
			int n;
			cin >> n;
			q.push(n);
		}
		else if (s == "pop")
		{
			if (!q.empty())
			{
			    cout << q.front() << "\n";
				q.pop();
			}
			else
			{
				cout << "-1\n";
			}
		}
		else if (s == "size")
		{
			cout << q.size() << "\n";
		}
		else if (s == "empty")
		{
			if (q.empty())
			{
				cout << "1\n";
			}
			else
			{
				cout << "0\n";
			}
		}
		else if (s == "front")
		{
			if (!q.empty())
			{
				cout << q.front() << "\n";
			}
			else
			{
				cout << "-1\n";
			}
		}
		else if (s == "back")
		{
			if (!q.empty())
			{
				cout << q.back() << "\n";
			}
			else
			{
				cout << "-1\n";
			}
		}

		order--;
	}
}