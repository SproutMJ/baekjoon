#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;

	while (t--) {
		int k, l = 0, r = 0;
		cin >> k;
		while (k--) {
			int x;
			cin >> x;
			if (x < 0)l += x;
			else r += x;
		}

		l = abs(l);
		if (l == r)cout << "Equilibrium\n";
		else if (l > r)cout << "Left\n";
		else cout << "Right\n";
	}
}