#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t, k, ans = 0, sum = 0;
	cin >> t >> k;

	for (int i = 0; i < t; i++) {
		int s;
		cin >> s;
		if (sum + s <= k) {
			ans++;
			sum += s;
		}
		else {
			cout << ans;
			return 0;
		}
	}

	cout << t;
}