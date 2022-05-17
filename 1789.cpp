#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	long long n, b = 1, e, ans;
	cin >> n;
	e = n;
	while (b <= e) {
		long long m = ((b + e) / 2);

		if ((m * (m + 1)) / 2 <= n) {
			ans = m;
			b = m + 1;
		}
		else {
			e = m - 1;
		}
	}
	cout << ans;
}