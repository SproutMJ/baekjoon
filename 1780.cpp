#include <iostream>
using namespace std;
short a[2187][2187] = { 0 };
int ans[3] = { 0 };
void f(int x, int y, int size) {
	if (size == 1) {
		ans[a[y][x] + 1]++;
		return;
	}

	int tmp[3] = { 0 };
	for (int j = y; j < y + size; j++)
		for (int i = x; i < x + size; i++)
			tmp[a[j][i] + 1]++;

	if (tmp[0] == size * size) ans[0]++;
	else if (tmp[1] == size * size) ans[1]++;
	else if (tmp[2] == size * size) ans[2]++;
	else {
		f(x, y, size / 3);
		f(x + size / 3, y, size / 3);
		f(x + size / 3 + size / 3, y, size / 3);
		f(x, y + size / 3, size / 3);
		f(x + size / 3, y + size / 3, size / 3);
		f(x + size / 3 + size / 3, y + size / 3, size / 3);
		f(x, y + size / 3 + size / 3, size / 3);
		f(x + size / 3, y + size / 3 + size / 3, size / 3);
		f(x + size / 3 + size / 3, y + size / 3 + size / 3, size / 3);
	}

}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];

	f(0, 0, n);
	for (const auto& i : ans)cout << i << "\n";
}