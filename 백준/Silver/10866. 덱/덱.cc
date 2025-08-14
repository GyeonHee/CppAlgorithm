#include <iostream>
#include <deque>
using namespace std;

int main()
{
	cin.tie(0);
	cin.sync_with_stdio(false);

	deque<int> dq;
	
	int order;
	cin >> order;

	int n;
	string s;
	while (order > 0)
	{	
		cin >> s;
		if (s == "push_front")
		{
			cin >> n;
			dq.push_front(n);
		}
		else if (s == "push_back")
		{
			cin >> n;
			dq.push_back(n);
		}
		else if (s == "pop_front")
		{
			if (!dq.empty())
			{
			    cout << dq.front() << "\n";
				dq.pop_front();
			}
			else
			{
				cout << "-1\n";
			}
		}
		else if (s == "pop_back")
		{
			if (!dq.empty())
			{
				cout << dq.back() << "\n";
				dq.pop_back();
			}
			else
			{
				cout << "-1\n";
			}
		}
		else if (s == "size")
		{
			cout << dq.size() << "\n";
		}
		else if (s == "empty")
		{
			if (dq.empty())
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
			if (!dq.empty())
			{
				cout << dq.front() << "\n";
			}
			else
			{
				cout << "-1\n";
			}
		}
		else if (s == "back")
		{
			if (!dq.empty())
			{
				cout << dq.back() << "\n";
			}
			else
			{
				cout << "-1\n";
			}
		}

		order--;
	}
}