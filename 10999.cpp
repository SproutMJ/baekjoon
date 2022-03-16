#include <iostream>
using namespace std;
long long arr[1000001];
long long seg[1000001 * 4];
long long laz[1000001 * 4];
long long init(int l, int r, int n) {
	if (l == r) return seg[n] = arr[l];

	int mid = (l + r) / 2;
	return seg[n] = (init(l, mid, n * 2) + init(mid + 1, r, n * 2 + 1));
}
void lazy(int l, int r, int n) {
	if (laz[n]) {
		seg[n] += (laz[n] * (r - l + 1));
		if (l != r) {
			laz[n * 2] += laz[n];
			laz[n * 2 + 1] += laz[n];
		}
		laz[n] = 0;
	}
}
void update(int l, int r, int n, int nl, int nr, long long d) {
	lazy(nl, nr, n);
	if (nl > r || l > nr) return;
	if (l <= nl && nr <= r) {
		seg[n] += (d * (nr - nl + 1));
		if (nl != nr) {
			laz[n * 2] += d;
			laz[n * 2 + 1] += d;
		}
		return;
	}

	int m = (nl + nr) / 2;
	update(l, r, n * 2, nl, m, d);
	update(l, r, n * 2 + 1, m + 1, nr, d);
	seg[n] = seg[n * 2] + seg[n * 2 + 1];
}
long long query(int l, int r, int n, int nl, int nr) {
	lazy(nl, nr, n);

	if (nl > r || l > nr)return 0;
	if (l <= nl && nr <= r) return seg[n];

	int m = (nl + nr) / 2;
	return (query(l, r, n * 2, nl, m) + query(l, r, n * 2 + 1, m + 1, nr));
}
int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n, m, k;
	cin >> n >> m >> k;

	for (int i = 1; i <= n; i++)cin >> arr[i];
	init(1, n, 1);

	m += k;
	while (m--) {
		long long f, a, b, v;
		cin >> f;
		if (f == 1) {
			cin >> a >> b >> v;
			update(a, b, 1, 1, n, v);
		}
		else {
			cin >> a >> b;
			cout << query(a ,b, 1, 1, n) << "\n";
		}
	}
	return 0;
}