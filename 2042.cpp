#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
int n, m, k;
vector<ll> v, tree;
void update(int idx, ll val) {
	for (idx; idx <= n; idx += (idx & -idx)) tree[idx] += val;
}
ll query(int idx) {
	ll sum = 0;
	for (; idx > 0; idx -= (idx & -idx)) sum += tree[idx];
	return sum;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m >> k;
	v.resize(n + 1), tree.resize(n + 1, 0);
	for (int i = 1; i <= n; i++) cin >> v[i];
	for (int i = 1; i <= n; i++) update(i, v[i]);

	for (int i = 0; i < m + k; i++) {
		ll a, b, c;
		cin >> a >> b >> c;
		if (a == 1) {
			ll diff = c - v[b];
			v[b] = c;
			update(b, diff);
		}
		else {
			cout << query(c) - query(b - 1) << "\n";
		}
	}
}