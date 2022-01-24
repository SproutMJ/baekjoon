#include <iostream>
#include <bitset>
using namespace std;
string a[100];

int n, m, d;
bool f(int i, int j) {
	for (int k = i; k < i + d; k++)
		if (a[k].at(j) == '#')return false;

	return true;
}
bool f2(int i, int j) {
	for (int k = j; k < j + d; k++)
		if (a[i][k] == '#')return false;

	return true;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m >> d;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	int ans = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			if (i + d <= n)ans += f(i, j);
			if (j + d <= m)ans += f2(i, j);
		}

	cout << ans;
}