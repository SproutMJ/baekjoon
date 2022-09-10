#include <iostream>
#include <queue>
#include <algorithm>
#include <climits>
using namespace std;
const int mx = 2001;
const int inf = 987654321;
vector<int> ds(mx);
vector<int> dh(mx);
vector<int> dg(mx);
vector<pair<int, int>> ver[mx];
vector<int> candi;

void dik(int stt, vector<int>& arr) {
	priority_queue<pair<int, int>> pq;
	pq.push({ 0, stt });
	arr[stt] = 0;

	while (!pq.empty()) {
		int cur = pq.top().second;
		int cost = -pq.top().first;
		pq.pop();

		for (const auto& i : ver[cur]) {
			int nxt = i.first;
			int ncost = i.second;
			if (cost + ncost < arr[nxt]) {
				arr[nxt] = cost + ncost;
				pq.push({ -arr[nxt], nxt });
			}
		}
	}
}

int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int te;
	cin >> te;
	while (te--) {
		for (int i = 0; i < mx; i++) {
			ds[i] = inf;
			dh[i] = inf;
			dg[i] = inf;
			ver[i].clear();
		}
		candi.clear();

		int n, m, t, s, g, h;
		cin >> n >> m >> t >> s >> g >> h;

		for (int i = 0; i < m; i++) {
			int a, b, c;
			cin >> a >> b >> c;
			ver[a].push_back({ b,c });
			ver[b].push_back({ a,c });
		}

		for (int i = 0; i < t; i++) {
			int a;
			cin >> a;
			candi.push_back(a);
		}
		sort(candi.begin(), candi.end());

		dik(s, ds);
		dik(h, dh);
		dik(g, dg);
		const int gh = dg[h];

		for (const auto& i : candi) {
			if ((ds[i] == ds[h] + gh + dg[i]) || (ds[i] == ds[g] + gh + dh[i]))cout << i << " ";
		}
	}
}