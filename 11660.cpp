#include <iostream>
#include <queue>
using namespace std;
int arr[1025][1025], sum[1025][1025];
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a, m;

	cin >> a >> m;
	for (int i = 1; i <= a; i++)
		for (int j = 1; j <= a; j++)
			cin >> arr[i][j];

	for (int i = 1; i <= a; i++)
		for (int j = 1; j <= a; j++)
			if (i == 1 && j == 1)
				sum[1][1] = arr[1][1];
			else if (i == 1)
				sum[1][j] = sum[1][j - 1] + arr[1][j];
			else if (j == 1)
				sum[i][1] = sum[i - 1][1] + arr[i][1];
			else
				sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + arr[i][j];

	while (m--) {
		int x, y, xx, yy;
		cin >> x >> y >> xx >> yy;

		cout << sum[xx][yy] - sum[xx][y - 1] - sum[x - 1][yy] + sum[x - 1][y - 1] << "\n";
	}
}