#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	long long ans = 0, now = 0;
	while (n--) {
		int x;
		cin >> x;
		now += x;
		if (now < 0)ans = max(ans, abs(now));
	}

	cout << ans;
}