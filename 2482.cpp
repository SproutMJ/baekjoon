#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int dp[1001][1001];

int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, k;
	const int mod = 1000000003;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		dp[i][0] = 1;
		dp[i][1] = i;
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 2; j <= k; j++) {
			dp[i][j] = (dp[i - 2][j - 1] + dp[i - 1][j]) % mod;
		}
	}

	cout << (dp[n - 1][k] + dp[n - 3][k - 1]) % mod;
}