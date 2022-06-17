#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	while (1) {
		int a, b, c, d, ans = 0;
		cin >> a >> b >> c >> d;
		if (a == 0 && b == 0 && c == 0 && d == 0) break;

		while (!(a == b && b == c && c == d)) {
			int ta = abs(a-b), tb = abs(b-c), tc = abs(c-d), td = abs(d-a);
			a = ta;
			b = tb;
			c = tc;
			d = td;
			ans++;
		}

		cout << ans << "\n";
	}
}