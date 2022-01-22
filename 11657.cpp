//#include <iostream>
//#include <vector>
//#include <tuple>
//using namespace std;
//int main() {
//	cin.tie(0);
//	ios::sync_with_stdio(0);
//
//	const long long INF = 0x7fffffffffffffff;
//	vector<tuple<int, int, long long>> v;
//	vector<long long> distance;
//	int n, m;
//	cin >> n >> m;
//	distance.resize(n + 1, INF);
//	distance[1] = 0;
//
//	long long a, b;
//	long long w;
//	for (int i = 0; i < m; i++) {
//		cin >> a >> b >> w;
//		v.push_back({ a,b,w });
//	}
//
//	bool flag = false;
//	for (int i = 1; i <= n; i++) {
//		for (auto const& e : v) {
//			tie(a, b, w) = e;
//			if (distance[a] != INF && distance[b] > distance[a] + w) {
//				distance[b] = distance[a] + w;
//				if (i == n) {
//					flag = true;
//					break;
//				}
//			}
//		}
//	}
//
//	if (flag)
//		cout << -1;
//	else
//		for (auto i = 2; i < distance.size(); i++) {
//			cout << ((distance[i] == INF) ? -1 : distance[i]) << "\n";
//		}
//}