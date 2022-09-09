#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while(t--) {
		double b, p;
		cin >> b >> p;

		double ans = 60 * b / p;
		cout << ans - ans / b << " " << ans << " " << ans + ans / b << "\n";
	}
}