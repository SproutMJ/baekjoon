#include <iostream>
#include <queue>
using namespace std;
bool flag[201][201];
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, m;
	cin >> n >> m;
	
	while (m--) {
		int a, b;
		cin >> a >> b;
		flag[a][b] = true;
		flag[b][a] = true;
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (flag[i][j])continue;
			for (int k = j + 1; k <= n; k++) {
				if (flag[i][k] || flag[j][k])continue;
				ans++;
			}
		}
	}
	cout << ans;
}