#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;

		int ans = 0;
		for (int i = 0; i < n; i++) {
			int c; cin >> c;

			ans += c / k;
		}
		cout << ans << "\n";
	}
}