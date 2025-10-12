#include <iostream>
#include <utility>
#include <queue>

using namespace std;

int board[501][501];
bool visit[501][501]; // 방문 여부 
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0, 1, 0, -1 };
queue<pair<int, int>> q;

int main() 
{
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> board[i][j];
		}
	}
	
	int area;
	int mx = 0;
	int num = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (visit[i][j] || board[i][j] == 0) continue;
			area = 0;
			num++;
			visit[i][j] = 1;
			q.push({ i,j });

			while (!q.empty())
			{
				area++;
				pair<int, int> cur = q.front();
				q.pop();
				for (int dir = 0; dir < 4; ++dir)
				{
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];
					if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
					if (visit[nx][ny] || board[nx][ny] != 1) continue;
					visit[nx][ny] = 1;
					q.push({ nx,ny });
				}
			}
			mx = max(mx, area);
		}
	}

	cout << num << '\n' << mx;

}