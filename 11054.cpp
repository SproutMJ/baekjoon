#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> v(n), min_dp(n, 1), max_dp(n, 1);
	for (auto& i : v)cin >> i;

	for (int i = 1; i < n; i++)
		for (int j = 0; j < i; j++) {
			if (v[j] < v[i] && max_dp[j] + 1 > max_dp[i])max_dp[i] = max_dp[j] + 1;
		}
	for (int i = n - 2; i >= 0; i--)
		for (int j = n - 1; j > i; j--) {
			if (v[j] < v[i] && min_dp[j] + 1 > min_dp[i])min_dp[i] = min_dp[j] + 1;
		}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans = max(ans, min_dp[i] + max_dp[i] - 1);
	}
	cout << ans;
}