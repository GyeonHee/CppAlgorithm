#include <iostream>

using namespace std;

int T, MX, NY, K, X, Y;
int board[51][51] = { 0, };
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int cnt = 0;

void dfs(int y, int x)
{
	board[y][x] = 0;

	for (int i = 0; i < 4; i++)
	{
		int ny = dy[i] + y;
		int nx = dx[i] + x;

		if (ny >= 0 && ny < NY && nx >= 0 && nx < MX)
		{
			if (board[ny][nx] == 1)
				dfs(ny, nx);
		}
	}

}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		cnt = 0;
		for (int i = 0; i < NY; i++)
		{
			for (int j = 0; j < MX; j++)
			{
				board[i][j] = 0;
			}
		}

		cin >> MX >> NY >> K;

		for (int i = 0; i < K; ++i)
		{
			cin >> X >> Y;
			board[Y][X] = 1;
		}

		for (int i = 0; i < NY; ++i)
		{
			for (int j = 0; j < MX; ++j)
			{
				if (board[i][j] == 1)
				{
					dfs(i, j);
					cnt++;
				}
			}
		}

		cout << cnt << "\n";
	}
}
