#include <iostream>
#include <cstring>
using namespace std;
int n, arr[25][25], dp[20][1 << 21];

int dfs(int cur, int vist) {
	if (vist == (1 << n) - 1)return 0;
	if (dp[cur][vist] != -1)return dp[cur][vist];

	dp[cur][vist] = 987654321;
	for (int i = 0; i < n; i++) {
		if (vist & (1 << i))continue;
		dp[cur][vist] = min(dp[cur][vist], dfs(cur + 1, vist | (1 << i)) + arr[cur][i]);
	}
	return dp[cur][vist];
}

int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];

	memset(dp, -1, sizeof(dp));
	cout << dfs(0, 0);
}