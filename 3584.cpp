#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int parent[10001];
bool vist[10001];

int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			parent[i] = i;
			vist[i] = false;
		}

		for (int i = 0; i < n - 1; i++) {
			int a, b;
			cin >> a >> b;
			parent[b] = a;
		}

		int u, w;
		cin >> u >> w;

		vist[u] = true;
		while (u != parent[u]) {
			u = parent[u];
			vist[u] = true;
		}
		while (true) {
			if (vist[w]) {
				cout << w << "\n";
				break;
			}
			w = parent[w];
		}
	}
}