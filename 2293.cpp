#include <iostream>
using namespace std;
int coin[101], dp[10001];

int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++)cin >> coin[i];

	dp[0] = 1;
	for (int i = 1; i <= n; i++)
		for (int j = coin[i]; j <= k; j++)
			dp[j] += dp[j - coin[i]];

	cout << dp[k];
}