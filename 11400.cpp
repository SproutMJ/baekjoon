#include <iostream>
#include <queue>
#include <set>
using namespace std;

vector<int> adj[100001];
int dfs[100001];

set<pair<int, int>> ans;
int cnt = 1;
int fun(int cur, int before) {
	dfs[cur] = cnt;
	cnt++;
	int ret = dfs[cur];

	for (const auto& i : adj[cur]) {
		if (i == before)continue;
		if (dfs[i]) {
			ret = min(ret, dfs[i]);
			continue;
		}

		int pre = fun(i, cur);
		if (pre > dfs[cur]) {
			int a = min(cur, i);
			int b = max(cur, i);
			if (!ans.count({ a,b }))
				ans.insert({ a,b });
		}
		ret = min(ret, pre);
	}
	return ret;
}
int main()
{
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int vn, en;
	cin >> vn >> en;
	if (vn == 0) {
		cout << 0;
		return 0;
	}

	for (int i = 0; i < en; i++) {
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	for (int i = 1; i <= vn; i++)
		if (dfs[i] == 0) fun(i, 0);

	cout << ans.size() << "\n";
	for (const auto& i : ans)
		cout << i.first << " " << i.second << "\n";
}