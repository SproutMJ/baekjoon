#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	while (n--) {
		int a, b, c;
		cin >> a >> b >> c;

		int ans = 0;
		for (int x = 1; x <= a; x++)
			for (int y = 1; y <= b; y++)
				for (int z = 1; z <= c; z++)
					if (x % y == y % z && y % z == z % x)ans++;

		cout << ans << "\n";

	}
}