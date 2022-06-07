#include <iostream>
#include <algorithm>
using namespace std;
int n, m, ans, sum;
int bbyte[101], cost[101], dp[101][10001];

int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	cin >> n >> m;
	for (int i = 1; i <= n; i++)cin >> bbyte[i];
	for (int i = 1; i <= n; i++) {
		cin >> cost[i];
		sum += cost[i];
	}

	for (int i=1; i<=n; i++)
		for (int j = 0; j <= sum; j++) {
			if (j - cost[i] >= 0)
				dp[i][j] = max(dp[i][j], dp[i - 1][j - cost[i]] + bbyte[i]);
			dp[i][j] = max(dp[i][j], dp[i - 1][j]);
		}

	for (int i = 0; i <= sum; i++)
		if (dp[n][i] >= m) {
			cout << i << "\n";
			break;
		}
}