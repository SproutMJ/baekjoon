#include <iostream>
#include <queue>
#include <numeric>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, k;
	cin >> n >> k;

	vector<int> v(n);
	for (auto& i : v) cin >> i;

	int ans = accumulate(v.begin(), v.begin() + k, 0);
	int tmp = ans;
	for (int i = 1; i + k - 1 <= n - 1; i++) {
		tmp -= v[i - 1];
		tmp += v[i + k - 1];
		ans = max(ans, tmp);
	}

	cout << ans;

}