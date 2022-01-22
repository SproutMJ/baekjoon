#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, b, a[500][500];
	cin >> n >> m >> b;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];


	unsigned long long ans = ULLONG_MAX;
	int h = 0;
	for (int q = 0; q <= 256; q++) {
		int block = b, time = 0;

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (a[i][j] > q) {
					block += (a[i][j] - q);
					time += (a[i][j] - q) * 2;
				}
				else {
					block -= (q - a[i][j]);
					time += (q - a[i][j]);
				}

		if (block >= 0) {
			if (ans > time) {
				ans = time;
				h = q;
			}
			else if (ans == time && q > h) {
				ans = time;
				h = q;
			}
		}
	}

	cout << ans << " " << h;
}