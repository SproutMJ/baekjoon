#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		int n, ans = 0;
		double d;
		cin >> n >> d;
		while (n--) {
			double s, f, p;
			cin >> s >> f >> p;

			if (f / p * s >= d)ans++;
		}

		cout << ans << "\n";
	}
}