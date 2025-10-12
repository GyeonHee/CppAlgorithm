#include <iostream>
#include <utility>
#include <queue>

using namespace std;

int arr[100001];
int n, k;



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

    cin >> n >> k;

    arr[n] = 0;

    queue<int> Q;
    Q.push(n);

    if (n == k) 
    {
        cout << 0;
        return 0;
    }

    while (!Q.empty())
    {
        int cur = Q.front();
        Q.pop();

        for (int nxt : {cur - 1, cur + 1, cur * 2}) 
        {
            if (nxt < 0 || nxt > 100001) continue;
            if (arr[nxt] > 0) continue;

            arr[nxt] = arr[cur] + 1;
            Q.push(nxt);
        }
    }

    cout << arr[k];
}