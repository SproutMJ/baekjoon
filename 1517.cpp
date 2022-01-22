#include <iostream>
#include <vector>
using namespace std;
vector<int> v, t;
long long result = 0;
void mm(int l, int m, int r) {
	int i = l, j = m + 1, k = 0;
	while (i <= m || j <= r) {
		if (i <= m && (j > r || v[i] <= v[j]))
			t[k++] = v[i++];
		else {
			t[k++] = v[j++];
			result += (m - i + 1);
		}
	}

	for (int i = l; i <= r; i++) v[i] = t[i - l];
}
void m(int l, int r) {
	if (l < r) {
		int mid = l + (r - l) / 2;
		m(l, mid);
		m(mid + 1, r);
		mm(l, mid, r);
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	v.resize(n);
	t.resize(n);
	for (auto& i : v)cin >> i;

	m(0, n - 1);
	cout << result;
}