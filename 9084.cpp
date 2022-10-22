#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n;

		vector<int> coin(n);
		for (auto& i : coin) cin >> i;
		cin >> k;
		vector<int> dp(k + 1, 0);
		dp[0] = 1;

		for (int i = 0; i < n; i++)
			for (int j = coin[i]; j <= k; j++)
				dp[j] = dp[j] + dp[j - coin[i]];

		cout << dp[k] << "\n";
	}
}