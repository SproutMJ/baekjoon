#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	int ans = 0;
	for (int i = 1; i <= n; i++) {
		int t;
		cin >> t;

		if (t >= 7) ans += 7;
		else ans += t;

		if (i % 2) ans -= 2;
		else ans -= 3;
	}

	cout << ans;
}