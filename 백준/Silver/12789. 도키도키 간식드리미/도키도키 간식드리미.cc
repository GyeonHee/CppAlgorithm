#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	
	queue<int> q;
	stack<int> st;
	int priority = 1;
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int size = st.size();
		for (int j = 0; j < size; ++j)
		{
			if ((!(st.empty())) && priority == st.top())
			{
				st.pop();
				priority++;
			}
		}
		int m;
		cin >> m;
		q.push(m);
		if (priority == q.front())
		{
			q.pop();
			priority++;
		}
		else if ((!(st.empty())) && priority == st.top())
		{
			st.pop();
			priority++;
		}
		else
		{
			st.push(q.front());
			q.pop();
		}		
	}

	int size = st.size();

	for (int i = 0; i < size; ++i)
	{
		if (st.top() == priority)
		{
			st.pop();
			priority++;
		}
		else
		{
			cout << "Sad\n";
			break;
		}
	}

	if(st.empty())
	{
		cout << "Nice\n";
	}
}
