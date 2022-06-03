#include <iostream>
#include <queue>
using namespace std;
int n, arr[1000001], dp[1000001];
vector<int> v;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	cin >> n;
	for (int i = 1; i <= n; i++) cin >> arr[i];

	for (int i = 1; i <= n; i++) {
		if (v.size() == 0 || v[v.size() - 1] < arr[i]) {
			v.push_back(arr[i]);
			dp[i] = v.size() - 1;
		}
		else {
			int l = 0;
			int r = v.size() - 1;
			while (l < r) {
				int m = (r - l) / 2 + l;
				if (v[m] >= arr[i])r = m;
				else l = m + 1;
			}
			v[l] = arr[i];
			dp[i] = l;
		}
	}

	cout << v.size() << "\n";
	vector<int> ans;
	int idx = v.size() - 1;
	for (int i=n; i>0; i--)
		if (dp[i] == idx) {
			idx--;
			ans.push_back(arr[i]);
		}

	for(int i = ans.size() - 1; i >= 0; i--) cout << ans[i] << " ";
}