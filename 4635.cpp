#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	while (1) {
		int n;
		cin >> n;
		if (n == -1)break;

		int ans = 0;
		int before = 0;
		while (n--) {
			int a, b;
			cin >> a >> b;
			ans += a * (b-before);
			before = b;
		}
		cout << ans << " miles\n";
	}
}