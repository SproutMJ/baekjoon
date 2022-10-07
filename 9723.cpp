#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	for (int t = 1; t <= n; t++) {
		vector<int> v(3);
		for (auto& i : v)cin >> i;
		sort(v.begin(), v.end());

		cout << "Case #" << t << ": ";
		if (v[2] * v[2] == v[0] * v[0] + v[1] * v[1])cout << "YES\n";
		else cout << "NO\n";
	}
}