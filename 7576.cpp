#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int m, n;
int arr[1000][1000];
queue<pair<int, int> > q;
bool isIn(int i, int j) {
	return (0 <= i && i < n && 0 <= j && j < m);
}
int di[4] = { 1, 0, -1, 0 };
int dj[4] = { 0, 1, 0, -1 };
void bfs() {
	while (!q.empty()) {
		int i = q.front().first;
		int j = q.front().second;
		q.pop();

		for (int k = 0; k < 4; k++) {
			int ii = i + di[k];
			int jj = j + dj[k];
			if (isIn(ii, jj) && arr[ii][jj] == 0) {
				arr[ii][jj] = arr[i][j] + 1;
				q.push({ ii, jj });
			}
		}
	}
}
int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	cin >> m >> n;

	for (int i=0; i < n; i++)
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1) q.push({ i, j });
		}

	bfs();

	int ans = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 0) {
				cout << -1;
				return 0;
			}
			ans = max(ans, arr[i][j]);
		}

	cout << ans - 1;
}