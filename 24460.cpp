#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int arr[1024][1024];

int dac(int x, int y, int siz) {
	if (siz == 1) {
		
		return arr[x][y];
	}

	int ans[4] = { dac(x, y, siz / 2), dac(x + siz / 2, y, siz / 2), dac(x, y + siz / 2, siz / 2), dac(x + siz / 2, y + siz / 2, siz / 2) };
	sort(begin(ans), end(ans));
	return ans[1];
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];

	cout << dac(0, 0, n);
}