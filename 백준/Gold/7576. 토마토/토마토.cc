#include<iostream>
#include <queue>

using namespace std;

int m, n;
int arr[1001][1001];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
queue<pair<int, int>> q;
int days = 0;

void bfs()
{
	while (!q.empty())
	{
		pair<int, int> cur = q.front();
		q.pop();
		
		for (int dir = 0; dir < 4; ++dir)
		{
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (arr[nx][ny] == 0)
			{
				arr[nx][ny] = arr[cur.first][cur.second] + 1;
				q.push({ nx, ny });
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> m >> n;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 1)
			{
				q.push({ i,j });
			}
		}
	} 

	bfs();

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (arr[i][j] == 0)
			{
				cout << -1;
				return 0;
			}
			if (days < arr[i][j])
			{
				days = arr[i][j] - 1;
			}
		}
	}
	
	cout << days;
	 
	return 0;
}