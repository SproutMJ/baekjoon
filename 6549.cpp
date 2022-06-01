#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

long long n;
long long seg[1000001];
long long x, ans;
long long h[100001];

int init(int node, int s, int e)
{
	if (s == e) return seg[node] = s;
	int mid = (e - s) / 2 + s;
	int l = init(2 * node, s, mid);
	int r = init(2 * node + 1, mid + 1, e);

	return seg[node] = h[l] < h[r] ? l : r;
}

int query(int node, int s, int e, int l, int r)
{
	if (e < l || r < s) return INT_MAX;
	if (l <= s && e <= r) return seg[node];
	int mid = (e - s) / 2 + s;
	int ll = query(2 * node, s, mid, l, r);
	int rr = query(2 * node + 1, mid + 1, e, l, r);

	if (ll == INT_MAX) return rr;
	else if (rr == INT_MAX) return ll;
	else return h[ll] < h[rr] ? ll : rr;
}


void solve(long long left, long long right)
{
	if (left > right) return;

	long long index = query(1, 0, n - 1, left, right);
	ans = max(ans, h[index] * (right - left + 1));

	solve(left, index - 1);
	solve(index + 1, right);

}

int main(){
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);
	while (1){
		ans = 0;
		cin >> n;
		if (n == 0) break;

		for (int i = 0; i < n; i++)
			cin >> h[i];

		init(1, 0, n - 1);
		solve(0, n - 1);

		cout << ans << "\n";
	}
}
