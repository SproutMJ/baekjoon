#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		int k, ans = 0, now =0;
		cin >> k;

		while (k--) {
			int a, b;
			cin >> a >> b;
			now = (now + a - b);
			ans = min(ans, now);
		}

		cout << abs(ans) << "\n";
	}
}