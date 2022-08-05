#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	while (1) {
		int a, b;
		cin >> a >> b;
		if (a == 0 && b == 0)break;

		int ans = 0;
		for (int i = 0; i < a; i++) {
			int t;
			cin >> t;
			ans += min(b / a, t);
		}

		cout << ans << "\n";
	}
}