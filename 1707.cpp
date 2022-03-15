#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int visited[20001] = { 0 };
vector<vector<int>> vertex(20001);
void dfs(int v, int color) {
	visited[v] = color;
	for (auto& i : vertex[v])
		if (visited[i] == 0)
			dfs(i, ((color == 1) ? 2 : 1));
}

bool check(int v) {
	for (int i = 1; i <= v; i++)
		for (const auto& j : vertex[i])
			if (visited[j] == visited[i])
				return false;

	return true;
}

int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);


	int t;
	cin >> t;
	while (t--) {
		fill(visited, visited + 20001, 0);
		fill(vertex.begin(), vertex.end(), vector<int>());

		int v, e;
		cin >> v >> e;
		for (int i = 0; i < e; i++) {
			int a, b;
			cin >> a >> b;
			vertex[a].push_back(b);
			vertex[b].push_back(a);
		}

		for (int i = 1; i <= v; i++)
			if (visited[i] == 0)
				dfs(i, 1);

		cout << ((check(v) == true) ? "YES\n" : "NO\n");
	}
}