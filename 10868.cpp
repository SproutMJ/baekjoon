#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int seg[100001 * 4];
int arr[100001];
long long init(int l, int r, int n) {
	if (l == r)return seg[n] = arr[l];
	int mid = (l + r) / 2;
	return seg[n] = ::min(init(l, mid, n * 2), init(mid + 1, r, n * 2 + 1));
}
long long query(int l, int r, int n, int nl, int nr) {
	if (nl > r || l > nr)return LLONG_MAX;
	if (l <= nl && nr <= r) return seg[n];

	int mid = (nl + nr) / 2;
	return ::min(query(l, r, n * 2, nl, mid), query(l, r, n * 2 + 1, mid + 1, nr));
}
int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)cin >> arr[i];
	init(1, n, 1);

	while (m--) {
		int a, b;
		cin >> a >> b;
		cout << query(a, b, 1, 1, n) << "\n";
	}
}