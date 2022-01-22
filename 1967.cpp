//#include<iostream>
//#include <vector>
//using namespace std;
//vector<pair<int, int>> v[10002];
//vector<bool> visited;
//int result = 0;
//int point = 0;
//void dfs(int p, int len) {
//	if (visited[p]) return;
//	visited[p] = true;
//
//	if (len > result) {
//		result = len;
//		point = p;
//	}
//
//	for (auto pair : v[p])
//		dfs(pair.first, len + pair.second);
//}
//int main() {
//	cin.tie(0);
//	ios::sync_with_stdio(0);
//
//	int n;
//	cin >> n;
//	visited.resize(n + 2);
//
//	for (int i = 0; i < n - 1; i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		v[a].push_back({ b,c });
//		v[b].push_back({ a,c });
//	}
//
//	dfs(1, 0);
//	fill(visited.begin(), visited.end(), false);
//
//	dfs(point, 0);
//	cout << result;
//}