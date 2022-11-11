#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>
#include <tuple>
using namespace std;
int n, m;
int u, v;
int p[1001];
vector<pair<int, int>> univgod;
vector<tuple<double, int, int>> di;
int find(int i) {
	if (p[i] == i)return i;
	else return p[i] = find(p[i]);
}
bool same(int a, int b) {
	return find(a) == find(b);
}
bool unon(int a, int b) {
	a = find(a);
	b = find(b);
	if (a != b) {
		p[a] = b;
		return true;
	}
	return false;
}
double calcul(int x, int y, int xx, int yy) {
	double xdist = pow(x - xx, 2);
	double ydist = pow(y - yy, 2);

	return sqrt(xdist + ydist);
}

int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	cin >> n >> m;
	for (int i = 1; i < n; i++)p[i] = i;

	univgod.push_back({ 0,0 });
	for (int i = 1; i <= n; i++) {
		int x, y;
		cin >> x >> y;
		univgod.push_back({ x, y });
	}

	for (int i = 1; i <= m; i++) {
		cin >> u >> v;
		unon(u, v);
	}

	for (int i = 1; i <= n - 1; i++)
		for (int j = i + 1; j <= n; j++)
			di.push_back({ calcul(univgod[i].first, univgod[i].second, univgod[j].first, univgod[j].second), i, j });

	sort(di.begin(), di.end());
	double ans = 0;
	for (const auto& i : di) {
		int x = get<1>(i);
		int y = get<2>(i);
		double d = get<0>(i);
		if (unon(x, y))ans += d;
	}
	cout << fixed;
	cout.precision(2);
	cout << ans;
}