#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		int d, ans = 0;
		cin >> d;
		while (ans + 1 + (ans + 1) * (ans + 1) <= d)ans++;
		cout << ans << "\n";
	}
}