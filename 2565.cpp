#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<pair<int, int>> v;
	v.resize(n);
	for (auto& i : v) cin >> i.first >> i.second;
	sort(v.begin(), v.end());

	int ans = 0;
	vector<int> dp(100, 1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++)
			if (v[j].second < v[i].second)
				dp[i] = ::max(dp[i], dp[j] + 1);
		ans = ::max(ans, dp[i]);
	}

	cout << n - ans;
}