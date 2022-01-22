//#include<iostream>
//#include<vector>
//using namespace std;
//vector<int> topol;
//vector<vector<int>> v;
//vector<bool> visited;
//void dfs(int n) {
//	if (visited[n]) return;
//	visited[n] = true;
//	for (const auto& i : v[n]) {
//		dfs(i);
//	}
//	topol.push_back(n);
//}
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n, m;
//	cin >> n >> m;
//	v.resize(n + 1);
//	visited.resize(n + 1, false);
//
//	for (int i = 0; i < m; i++) {
//		int a, b;
//		cin >> a >> b;
//		v[a].push_back(b);
//	}
//
//	for (int i = 1; i <= n; i++)
//		dfs(i);
//	for (vector<int>::reverse_iterator i = topol.rbegin(); i != topol.rend(); i++)
//		cout << *i << " ";
//}