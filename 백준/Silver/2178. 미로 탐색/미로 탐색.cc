#include <iostream>
#include <utility>
#include <queue>

using namespace std;

int maze[101][101] = { 0, };
bool visit[101][101];
int dist[101][101] = { 0, };
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0, 1, 0, -1 };
int n, m;

void bfs(int x, int y)
{
	queue<pair<int, int>> q;
	visit[x][y] = 1;
	dist[x][y] = 1;
	q.push(make_pair(x, y));
	while (!q.empty())
	{
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int dir = 0; dir < 4; ++dir)
		{
			int nx = x + dx[dir];
			int ny = y + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (visit[nx][ny] || maze[nx][ny] != 1) continue;
			visit[nx][ny] = 1;
			dist[nx][ny] = dist[x][y]+1;
			q.push({ nx, ny });
		}
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	string input;
	for (int i = 0; i < n; i++) {
		cin >> input;
		for (int j = 0; j < m; j++) {
			maze[i][j] = input[j] - '0';
		}
	}


	bfs(0, 0);

	cout << dist[n - 1][m - 1];
	
}