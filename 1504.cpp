#include <iostream>
#include <queue>
#include <algorithm>
#include <climits>
#include <tuple>
#include <functional>
using namespace std;
int n, e;
vector<vector<pair<int, int>>> v;
vector<int> d;
int dic(int s, int e) {
	d = vector<int>(n + 1, INT_MAX);
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
	d[s] = 0;
	q.push({ 0, s });

	while (!q.empty()) {
		pair<int, int> now = q.top();
		q.pop();

		if (now.first > d[now.second]) continue;

		for (const auto& i : v[now.second]) {
			if (now.first + i.first < d[i.second]) {
				q.push({ now.first + i.first, i.second });
				d[i.second] = now.first + i.first;
			}
		}
	}

	return d[e];
}
int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	cin >> n >> e;
	v.resize(n + 1);

	while (e--) {
		int a, b, c;
		cin >> a >> b >> c;
		v[a].push_back({ c, b });
		v[b].push_back({ c, a });
	}

	int a, b;
	cin >> a >> b;

	int t[6] = { dic(1, a), dic(a, b), dic(b, n), dic(1, b), dic(b, a), dic(a, n) };

	for (const int i : t)
		if (i < 0 || i == INT_MAX) {
			cout << -1;
			return 0;
		}

	cout << ::min(t[0] + t[1] + t[2], t[3] + t[4] + t[5]);
	return 0;
}