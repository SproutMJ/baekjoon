#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t, k, before, ans = 0;
	cin >> t >> k >> before;

	t--;
	while (t--) {
		int x;
		cin >> x;
		if (before - k >= x)ans++;
		before = x;
	}

	cout << ans;

}