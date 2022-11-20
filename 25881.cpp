#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a, b, t;
	cin >> a >> b >> t;

	while (t--) {
		int k;
		cin >> k;

		cout << k << " ";
		if (k <= 1000)cout << k * a;
		else cout << 1000 * a + (k - 1000) * b;
		cout << "\n";
	}
}