#include <iostream>
using namespace std;
int arr[101][101];
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, m;
	cin >> n >> m;
	while (n--) {
		int x, y, xx, yy;
		cin >> x >> y >> xx >> yy;
		for (x; x <= xx; x++)
			for (int j = y; j <= yy; j++)
				arr[x][j]++;
	}
	int ans = 0;
	for (int i = 1; i <= 100; i++)
		for (int j = 1; j <= 100; j++)
			if (arr[i][j] > m) ans++;
		
	cout << ans;
}