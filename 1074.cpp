#include <iostream>
using namespace std;
int n, r, c, ans = 0;
void f(int x, int y, int size) {
	if (x == c && y == r) {
		cout << ans;
		return;
	}

	if (x <= c && c < x + size && y <= r && r < y + size) {
		f(x, y, size / 2);
		f(x + size / 2, y, size / 2);
		f(x, y + size / 2, size / 2);
		f(x + size / 2, y + size / 2, size / 2);
	}
	else {
		ans += size * size;
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> r >> c;
	f(0, 0, (1 << n));
}