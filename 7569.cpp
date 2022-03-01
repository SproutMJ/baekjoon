#include <iostream>
#include <queue>
#include <algorithm>
#include <tuple>
using namespace std;
int m, n, h;
int arr[100][100][100];
queue<tuple<int, int, int> > q;
bool isIn(int i, int j, int k) {
	return (0 <= i && i < n && 0 <= j && j < m && 0 <= k && k < h);
}
int di[6] = { 1, 0, 0, -1, 0, 0 };
int dj[6] = { 0, 1, 0, 0, -1, 0 };
int dk[6] = { 0, 0, 1, 0, 0, -1 };
void bfs() {
	while (!q.empty()) {
		int i = get<0>(q.front());
		int j = get<1>(q.front());
		int k = get<2>(q.front());
		q.pop();

		for (int u = 0; u < 6; u++) {
			int ii = i + di[u];
			int jj = j + dj[u];
			int kk = k + dk[u];
			if (isIn(ii, jj, kk) && arr[ii][jj][kk] == 0) {
				arr[ii][jj][kk] = arr[i][j][k] + 1;
				q.push({ ii, jj, kk});
			}
		}
	}
}
int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	cin >> m >> n >> h;

	for (int k = 0; k < h; k++)
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++) {
				cin >> arr[i][j][k];
				if (arr[i][j][k] == 1) q.push({i, j, k});
			}

	bfs();

	int ans = 0;
	for (int k = 0; k < h; k++)
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++) {
				if (arr[i][j][k] == 0) {
					cout << -1;
					return 0;
				}
				ans = max(ans, arr[i][j][k]);
			}

	cout << ans - 1;
}