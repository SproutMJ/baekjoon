#include <iostream>
#include <queue>
using namespace std;

int size, t;
int arr[1025][1025];
int tree[1025][1025];

int query(int r, int c) {
	int ret = 0;
	for (int i = r; i > 0; i -= (i & -i))
		for (int j = c; j > 0; j -= (j & -j))
			ret += tree[i][j];
	return ret;
}

void update(int r, int c, int n) {
	for (int i = r; i <= ::size; i += (i & -i))
		for (int j = c; j <= ::size; j += (j & -j))
			tree[i][j] += n;
}

int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	cin >> ::size >> t;
	for (int r = 1; r<=::size; r++)
		for (int c = 1; c <= ::size; c++) {
			cin >> arr[r][c];
			update(r, c, arr[r][c]);
		}

	int w, r, c, rr, cc, n;
	while (t--) {
		cin >> w;
		if (w == 0) {
			cin >> r >> c >> n;
			update(r, c, n - arr[r][c]);
			arr[r][c] = n;
		}
		else {
			cin >> r >> c >> rr >> cc;
			cout << query(rr, cc) - query(rr, c - 1) - query(r - 1, cc) + query(r - 1, c - 1) << "\n";
		}
	}

}