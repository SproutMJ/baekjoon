#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int n, k;
int dp[10001];
vector<int> coin;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);
	
	cin >> n >> k;

	coin.resize(n);
	for (auto& i : coin)
		cin >> i;

	for (int i = 1; i <= k; i++)dp[i] = 10001;
	for (int i = 0; i < n; i++)
		for (int j = coin[i]; j <= k; j++)
			dp[j] = min(dp[j], dp[j - coin[i]] + 1);

	if (dp[k] == 10001) cout << -1;
	else cout << dp[k];
}