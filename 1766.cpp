#include <iostream>
#include <queue>
using namespace std;
int n, m;
int deg[32001];
vector<int> arr[32001];
int main()
{
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		deg[b]++;
	}

	priority_queue<int, vector<int>, greater<int>> q;
	for (int i = 1; i <= n; i++)
		if (deg[i] == 0)q.push(i);

	while (!q.empty()) {
		int now = q.top();
		q.pop();
		cout << now << " ";
		for (const auto &i : arr[now]) {
			deg[i]--;
			if (deg[i] == 0) q.push(i);
		}
	}
}