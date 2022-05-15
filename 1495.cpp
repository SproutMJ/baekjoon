#include <iostream>
#include <queue>
using namespace std;
int n, s, m;
bool dp[110][1010];
int main()
{
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	cin >> n >> s >> m;
	vector<int> v(n + 1);
	for (int i = 1; i <= n; i++) cin >> v[i];

	if (s + v[1] <= m)dp[1][s + v[1]] = true;
	if (s - v[1] >= 0)dp[1][s - v[1]] = true;

	for (int i=2; i<=n; i++)
		for (int j = 0; j<=m; j++)
			if (dp[i - 1][j]) {
				if (j + v[i] <= m)dp[i][j + v[i]] = true;
				if (j - v[i] >= 0)dp[i][j - v[i]] = true;
			}

	for (int i=m; i>=0; i--)
		if (dp[n][i]) {
			cout << i;
			return 0;
		}
	cout << -1;
}