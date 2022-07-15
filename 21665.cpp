#include <iostream>
#include <queue>
using namespace std;

int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, m;
	cin >> n >> m;
	vector<string> v(n), vv(n);

	for (auto& i : v)cin >> i;
	for (auto& i : vv)cin >> i;

	int ans = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (v[i][j] == vv[i][j])ans++;
	cout << ans;
}