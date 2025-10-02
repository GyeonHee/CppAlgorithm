#include <iostream>
#include <queue>

using namespace std;

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	
	queue<int> q;
	
	int n, k;
	cin >> n;
	cin >> k;

	cout << "<";
	for (int i = 0; i < n; ++i)
	{
		q.push(i + 1);
	}

	int i = 1;
	while (n - 1)
	{
		if (i % k != 0)
		{
			q.push(q.front());
			q.pop();
		}
		else
		{
			cout << q.front() << ", ";
			q.pop();
			n--;
		}
		i++;
	}
	cout << q.front() << ">";
}
