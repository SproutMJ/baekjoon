#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
using pii = pair<int, int>;
int st, de, n, m;
int cost[1001] = {987654321, };
int route[1001];
vector<pair<int, int>> edge[1001];

void dic() {
	priority_queue<pair<int, int>> pq; //가중치, 다음
	cost[st] = 0;
	pq.push({ 0, st });

	while (!pq.empty()) {
		int cur = pq.top().second;
		int ccost = -pq.top().first;
		pq.pop();

		if (ccost > cost[cur])continue;

		for (const auto& i : edge[cur]) { //다음, 가중치
			int nxt = i.first;
			int ncost = i.second;
			if (cost[nxt] > ccost + ncost) {
				route[nxt] = cur;
				cost[nxt] = ccost + ncost;
				pq.push({ -cost[nxt], nxt });
			}

		}
	}
}
void print() {
	cout << cost[de] << "\n";

	vector<int> r;
	int now = de;
	while (now) {
		r.push_back(now);
		now = route[now];
	}

	cout << r.size() << "\n";
	reverse(r.begin(), r.end());
	for_each(r.begin(), r.end(), [](const auto& val)->void {
		cout << val << " ";
		});
}

int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	fill(begin(cost), end(cost), 987654321);
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		edge[a].push_back({ b,c });
	}

	cin >> st >> de;
	dic();
	print();
}