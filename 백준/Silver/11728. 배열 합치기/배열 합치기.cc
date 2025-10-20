#include<iostream>

using namespace std;

int N, M;
int arr1[1000001];
int arr2[1000001];
int ans[2000002];

// 3 5
// 2 9
// 2 3 5 9
int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> N >> M;

	for (int i = 0; i < N; ++i)
		cin >> arr1[i];

	for (int i = 0; i < M; ++i)
		cin >> arr2[i];

	int idx1 = 0, idx2 = 0;
	for (int i = 0; i < N + M; ++i)
	{
		if (idx2 == M) ans[i] = arr1[idx1++];
		else if (idx1 == N) ans[i] = arr2[idx2++];
		else if (arr1[idx1] <= arr2[idx2]) ans[i] = arr1[idx1++];
		else ans[i] = arr2[idx2++];
	}

	for (int i = 0; i < N + M; ++i)
	{
		cout << ans[i] << " ";
	}

	return 0;
}