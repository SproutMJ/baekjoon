#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);
	int t, ans = 987654321;

	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		if (a <= b) ans = min(ans, b);
	}

	if (ans == 987654321) cout << -1;
	else cout << ans;
}