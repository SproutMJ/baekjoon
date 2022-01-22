#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> v(n);
	for (auto& i : v) cin >> i;
	vector<int> dp(v);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (v[j] < v[i]) dp[i] = max(dp[i], v[i] + dp[j]);
		}
	}

	cout << *max_element(dp.begin(), dp.end());
}