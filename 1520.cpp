#include <iostream>
#include <algorithm>
using namespace std;
int arr[501][501];
int dp[501][501];

int n, m;
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int dfs(int x, int y) {
	if (x == 0 && y == m - 1) return 1;
	else if (dp[x][y] != -1)return dp[x][y];
	else {
		dp[x][y] = 0;
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i], ny = y + dy[i];
			if ((0 <= nx && nx < n) && (0 <= ny && ny < m)) {
				if (arr[nx][ny] < arr[x][y]) dp[x][y] += dfs(nx, ny);
			}
		}
		return dp[x][y];
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	fill(&dp[0][0], &dp[500][501], -1);
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) cin >> arr[i][j];

	cout << dfs(0, 0);
}