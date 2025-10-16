#include <iostream>

using namespace std;

int n, m, t;
int ans;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		ans = 1; 
		int tmp = 1;
		cin >> n >> m;

		for (int i = m; i > m - n; --i)
		{
			ans *= i;
			ans /= tmp++;
		}

		cout << ans << "\n";
	}
}
