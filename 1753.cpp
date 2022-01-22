//#include<vector>
//#include <iostream>
//#include<queue>
//#include <cmath>
//using namespace std;
//vector<vector<pair<int, int> >> v;
//int main() {
//	cin.tie(0);
//	ios::sync_with_stdio(0);
//	int n, m, start;
//	v.resize(20001);
//	cin >> n >> m >> start;
//	for (int i = 0; i < m; i++ ) {
//		int a, b, w;
//		cin >> a >> b >> w;
//		v[a].push_back(make_pair(b, w));
//	}
//
//	double distance[20001];
//	for (auto& i : distance) {
//		i = INFINITY;
//	}
//
//	distance[start] = 0;
//	priority_queue<pair<int, int>> q;
//	q.push({ 0, start });
//	int processed[20001];
//	for (auto& i : processed) {
//		i = false;
//	}
//
//	while (!q.empty()) {
//		auto top = q.top();
//		int a = top.second;
//		q.pop();
//		if (processed[a]) continue;
//		processed[a] = true;
//		for (auto &u : v[a]) {
//			if (distance[a] + u.second < distance[u.first]) {
//				distance[u.first] = distance[a] + u.second;
//				q.push({ -distance[u.first], u.first });
//			}
//		}
//	}
//
//	for (int i = 1; i <= n; i++) {
//		if (distance[i] == INFINITY) {
//			cout << "INF\n";
//		}
//		else {
//			cout << distance[i] << "\n";
//		}
//	}
//
//}