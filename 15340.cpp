#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	while (1) {
		int c, d;
		cin >> c >> d;

		if (c == 0 && d == 0)break;

		int ans = min(c * 30 + d * 40, c * 35 + d * 30);
		ans = min(ans, c * 40+ d * 20);
		cout << ans << "\n";
	}	
}