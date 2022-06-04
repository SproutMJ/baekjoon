#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int n, m;
vector<vector<int>> adj;
vector<int> tmp;

int indgree[100001], id[100001], vis[100001], vc, sc;

int scc(int n) {
    int ret = vis[n] = vc++;
    tmp.push_back(n);

    for (auto& next : adj[n])
        if (vis[next] == -1)
            ret = min(ret, scc(next));
        else if (id[next] == -1)
            ret = min(ret, vis[next]);

    if (ret == vis[n]) {
        while (1) {
            int temp = tmp.back();
            tmp.pop_back();
            id[temp] = sc;
            if (temp == n) break;
        }
        sc++;
    }

    return ret;
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;

        memset(vis, -1, sizeof(vis));
        memset(id, -1, sizeof(id));
        memset(indgree, 0, sizeof(indgree));
        adj.clear();
        adj.resize(n + 1, vector<int>());
        vc = sc = 0;

        int u, v;
        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }

        int result = 0;

        for (int i = 1; i <= n; i++) {
            if (vis[i] != -1) continue;
            scc(i);
        }

        for (int i = 1; i <= n; i++)
            for (auto& w : adj[i]) {
                if (id[w] == id[i]) continue;
                indgree[id[w]]++;
            }

        for (int i = 0; i < sc; i++)
            if (!indgree[i]) result++;

        cout << result << "\n";
    }
}