#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int man[10001];
vector<int> tree[10001];
bool vist[10001];
int dp[10001][2];
void dfs(int cur) {
	vist[cur] = true;

	dp[cur][0] = 0;
	dp[cur][1] = man[cur];
	for (const auto& i : tree[cur]) {
		if (vist[i])continue;

		dfs(i);
		dp[cur][0] += max(dp[i][0], dp[i][1]);
		dp[cur][1] += dp[i][0];
	}
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int m;
		cin >> m;
		man[i] = m;
	}

	for (int i = 1; i < n; i++) {
		int a, b;
		cin >> a >> b;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}

	dfs(1);

	cout << max(dp[1][0], dp[1][1]);
}