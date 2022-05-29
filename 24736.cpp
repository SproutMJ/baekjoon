#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int ans = 6 * a + 3 * b + 2 * c + 1 * d + 2 * e;

	cin >> a >> b >> c >> d >> e;

	cout << ans << " " << 6 * a + 3 * b + 2 * c + 1 * d + 2 * e;
}