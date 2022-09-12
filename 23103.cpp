#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int ans = 0, n;
	cin >> n;
	int x, y;
	cin >> x >> y;

	n--;
	while (n--) {
		int a, b;
		cin >> a >> b;
		ans += abs(x - a) + abs(y - b);
		x = a;
		y = b;
	}

	cout << ans;
}