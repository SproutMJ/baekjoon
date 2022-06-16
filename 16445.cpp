#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t, ans = 0;
	cin >> t;
	while (t--) {
		int x;
		cin >> x;
		if (x == 2 || x == 3)ans++;
	}

	cout << ans;
}