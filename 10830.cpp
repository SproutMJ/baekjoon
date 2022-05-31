#include <iostream>
#include <queue>
using namespace std;

long long n, b;
long long x[5][5], tmp[5][5], ans[5][5];
void multi(long long a[5][5], long long b[5][5]) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			tmp[i][j] = 0;
			for (int k = 0; k < n; k++)
				tmp[i][j] += a[i][k] * b[k][j];
			tmp[i][j] %= 1000;
		}

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = tmp[i][j];
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	cin >> n >> b;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cin >> x[i][j];
		ans[i][i] = 1;
	}

	while (b > 0) {
		if (b % 2 == 1)
			multi(ans, x);
		multi(x, x);
		b /= 2;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << ans[i][j] << " ";
		cout << "\n";
	}
}