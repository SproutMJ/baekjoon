#include <iostream>
using namespace std;
int arr[401][401];
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int v, e;
	cin >> v >> e;
	for (int i = 1; i <= v; i++)
		for (int j = 1; j <= v; j++)
			if (i == j)arr[i][j] = 0;
			else arr[i][j] = 987654321;
		
	for (int i = 0; i < e; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		arr[a][b] = c;
	}

	for (int k = 1; k <= v; k++)
		for (int i = 1; i <= v; i++)
			for (int j = 1; j <= v; j++)
				arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);

	int ans = 987654321;
	for (int i = 1; i <= v; i++)
		for (int j = 1; j <= v; j++)
			if (i != j)
				ans = min(ans, arr[i][j] + arr[j][i]);

	if (ans == 987654321)cout << -1;
	else cout << ans;
}