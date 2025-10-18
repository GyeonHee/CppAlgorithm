#include <vector>
#include <iostream>
#include <queue>
using namespace std;

int solution(vector<vector<int>> maps)
{
    int n = maps.size();
    int m = maps[0].size();
    bool visit[101][101] = {false};
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    queue<pair<pair<int,int>, int>> q; // {{x,y}, distance}

    visit[0][0] = true;
    q.push({{0, 0}, 1});

    while(!q.empty())
    {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int dist = q.front().second;
        q.pop();

        // 도착점 도달
        if(x == n - 1 && y == m - 1)
            return dist;

        for(int dir = 0; dir < 4; ++dir)
        {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(maps[nx][ny] == 0 || visit[nx][ny]) continue;

            visit[nx][ny] = true;
            q.push({{nx, ny}, dist + 1});
        }
    }

    return -1; // 도착 불가
}
