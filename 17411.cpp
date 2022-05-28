#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int arr[1000001], dp[1000001], lis[1000001];
vector<long long> num[1000001], sum[1000001];
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, len = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];

	for (int i = 0; i < n; i++) {
		int idx = lower_bound(lis, lis + len, arr[i]) - lis;
		lis[idx] = arr[i];
		dp[i] = idx + 1;
		len = max(len, dp[i]);
	}

	cout << len << " ";
	
	for (int i = 1; i <= len; i++) {
		sum[i].push_back(0);
	}
	for (int i = n - 1; i >= 0; i--) {
		int j = 1;
		int l = dp[i];
		if (l < len) {
			int idx = upper_bound(num[l + 1].begin(), num[l + 1].end(), arr[i]) - num[l + 1].begin();
			j = sum[l + 1].back() - sum[l + 1][idx];
		}
		num[l].push_back(arr[i]);
		sum[l].push_back((j + sum[l].back()) % 1000000007);
	}

	cout << (sum[1].back() + 1000000007) % 1000000007 << "\n";
}