#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int n, p, ans;
int flow[401][401];
int capa[401][401];
vector<vector<int>> adj;
int src = 1, sync = 2;
void fun() {
	while (1) {
		queue<int> q;
		q.push(src);
		vector<int> parent(n + 1, -1);
		int m = 987654321;

		while (!q.empty()) {
			int cur = q.front(); q.pop();

			for (const auto& i : adj[cur]) 
				if (capa[cur][i] - flow[cur][i] > 0 && parent[i] == -1) {
					q.push(i);
					parent[i] = cur;
					if (src == sync)break;
				}
		}

		if (parent[sync] == -1)break;
		for (int i = sync; i != src; i = parent[i])
			m = min(m, capa[parent[i]][i] - flow[parent[i]][i]);
		for (int i = sync; i != src; i = parent[i]) {
			flow[parent[i]][i] += m;
			flow[i][parent[i]] -= m;
		}

		ans += m;
	}

	return;
}

int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	cin >> n >> p;

	adj.resize(n + 1);

	for (int i = 0; i < p; i++) {
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
		capa[a][b] = 1;
	}

	fun();

	cout << ans;
}