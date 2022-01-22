#include<iostream>
#include<vector>
using namespace std;
vector<pair<int, int>> v[100001];
vector<bool> visited(100001);
int result = 0, point;
void dfs(int p, int len) {
	if (visited[p]) return;
	visited[p] = true;

	if (len > result) {
		result = len;
		point = p;
	}

	for (auto pair : v[p])
		dfs(pair.first, len + pair.second);
}
int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int src, dst, wei;
		cin >> src;
		while (true) {
			cin >> dst;
			if (dst == -1) break;
			cin >> wei;
			v[src].push_back({ dst,wei });
		}
	}

	dfs(1, 0);
	fill(visited.begin(), visited.end(), false);
	result = 0;

	dfs(point, 0);
	cout << result;
}