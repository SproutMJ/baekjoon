#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> v(n), dp;
	for (auto& i : v) cin >> i;

	for (int i = 0; i < n; i++) {
		if (dp.size() == 0 || dp.back() < v[i])dp.push_back(v[i]);
		else {
			int b = 0, e = dp.size();
			while (b < e) {
				int m = (b + e) / 2;
				if (dp[m] >= v[i])e = m;
				else b = m + 1;
			}
			dp[b] = v[i];
		}
	}
	
	cout << dp.size();
}