#include <iostream>
#include <queue>
#include <climits>
#include <tuple>
using namespace std;
vector<pair<int, int>> v[10001];
int d[10001][21];
int n, m, k;
int dic(int s, int e) {
	priority_queue< tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> q;
	q.push({ 0, s, 0 });
	d[s][0] = 0;

	while (!q.empty())
	{
		int val, ver, time;
		tie(val, ver, time) = q.top();
		q.pop();

		if (val > d[ver][time]) continue;
		for (const auto& i : v[ver]) {
			if (val+i.first < d[i.second][time]) {
				d[i.second][time] = val + i.first;
				q.push({ val + i.first , i.second, time });
			}

			if (time < k && val + 0 < d[i.second][time + 1]) {
				d[i.second][time + 1] = val + 0;
				q.push({ val + 0, i.second, time + 1 });
			}
		}
	}

	unsigned long long ans = ULLONG_MAX;
	for (int i = 0; i <= k; i++) {
		ans = ::min(ans, (unsigned long long)d[n][i]);
	}
	return ans;
}
int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> n >> m >> k;
	while (m--) {
		int a, b, c;
		cin >> a >> b >> c;
		v[a].push_back({ c,b });
		v[b].push_back({ c,a });
	}

	fill(&d[0][0], &d[10000][21], INT_MAX);
	cout << dic(1, n);
}