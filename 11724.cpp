#include <iostream>
#include <queue>
#include <algorithm>
#include <tuple>
using namespace std;
vector<vector<int>> l;
vector<int> visited;
int ans = 0;
void dfs(int v) {
	for (const auto& i : l[v]) {
		if (visited[i] != true) {
			visited[i] = true;
			dfs(i);
		}
	}
}
int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;
	l.resize(n + 1);
	visited.resize(n + 1, false);

	while (m--) {
		int u, v;
		cin >> u >> v;
		l[u].push_back(v);
		l[v].push_back(u);
	}

	for (int i = 1; i <= n; i++) {
		if (visited[i] != true) {
			visited[i] = true;
			dfs(i);
			ans++;
		}
	}

	cout << ans;
}