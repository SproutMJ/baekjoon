#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int ans = 0, a, j = 5;
		while (j--) {
			cin >> a;
			ans = max(ans, a);
		}
		
		cout << "Case #" << i << ": " << ans << "\n";
	}
}