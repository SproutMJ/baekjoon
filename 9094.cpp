#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	while (n--) {
		int n, m;
		cin >> n >> m;

		int ans = 0;
		for (int a = 1; a < n; a++)
			for (int b = a + 1; b < n; b++)
				if ((a * a + b * b + m) % (a * b) == 0)ans++;

		cout << ans << "\n";
	}
}