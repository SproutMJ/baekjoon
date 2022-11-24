#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, ans = 0;
	cin >> n;

	int sx, sy, x, y, nx, ny;
	cin >> sx >> sy;

	x = sx, y = sy;

	for (int i = 0; i < n - 1; i++) {
		cin >> nx >> ny;
		ans += abs(nx + ny - x - y);
		x = nx, y = ny;
	}

	ans += abs(x + y - sx - sy);

	cout << ans;
}