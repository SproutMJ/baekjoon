#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;

	int ans = 0;
	while (t--) {
		int a, d, g;
		cin >> a >> d >> g;
		
		if (a == (d + g))a = 2 * (a *= (d + g));
		else a *= (d + g);
		ans = max(ans, a);
	}

	cout << ans;
}