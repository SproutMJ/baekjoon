#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;
int t, n, m;
int deg[501];
bool e[501][501];
int main()
{
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	cin >> t;
	while (t--) {
		memset(deg, 0, sizeof(deg));
		memset(e, 0, sizeof(e));
		cin >> n;
		vector<int> v;
		for (int i = 1; i <= n; i++) {
			int j;
			cin >> j;
			for (const auto& k : v) {
				e[j][k] = true;
				deg[k]++;
			}
			v.push_back(j);
		}

		cin >> m;
		while (m--) {
			int a, b;
			cin >> a >> b;
			if (e[a][b]) {
				e[a][b] = false;
				deg[b]--;
				deg[a]++;
				e[b][a] = 1;
			}
			else if (e[b][a]) {
				e[b][a] = false;
				deg[a]--;
				deg[b]++;
				e[a][b] = true;
			}
		}

		queue<int> q;
		bool flag = false;
		for (int i = 1; i <= n; i++)
			if (!deg[i])
				q.push(i);

		vector<int> ans;
		while (!q.empty()) {
			if (q.size() > 1) {
				flag = true;
				break;
			}

			int now = q.front();
			ans.push_back(now);
			q.pop();

			for (int i = 1; i <= n; i++) {
				if (!e[now][i])continue;
				deg[i]--;
				if (!deg[i]) q.push(i);
			}
		}

		if (ans.size() != n) {
			cout << "IMPOSSIBLE\n";
			continue;
		}

		if (flag) {
			cout << "?\n";
			continue;
		}

		reverse(ans.begin(), ans.end());

		for (auto x : ans) cout << x << " ";
		cout << "\n";
	}
}