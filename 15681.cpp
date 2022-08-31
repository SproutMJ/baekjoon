#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int n, r, q;
vector<int> graph[100001];
int dp[100001];
bool vist[100001];

int dfs(int st) {
	if (dp[st] != 0)return dp[st];
	vist[st] = true;
	for (const auto& i : graph[st]) {
		if (vist[i])continue;
		dp[st] += dfs(i);
	}

	return ++dp[st];
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, r, q;
	cin >> n >> r >> q;

	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	dp[r] = dfs(r);
	while (q--) {
		int a;
		cin >> a;
		cout << dp[a] << "\n";
	}
}