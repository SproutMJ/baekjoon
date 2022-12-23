#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
const int mx = 1500000 + 1;
int arr[mx][2];
int dp[mx];
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}

	int ans = 0;
	for (int i = 1; i <= n + 1; i++) {
		ans = max(ans, dp[i]);
		if (arr[i][0] + i > n + 1)
			continue;

		dp[i + arr[i][0]] = max(dp[i + arr[i][0]], ans + arr[i][1]);
	}

	cout << ans;
}