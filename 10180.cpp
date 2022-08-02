#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		int n, ans = 0;
		double k;
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			double a, b, c;
			cin >> a >> b >> c;
			if (b / c * a >= k)ans++;
		}

		cout << ans++ << "\n";;
	}
}