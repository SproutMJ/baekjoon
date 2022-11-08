#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<long long> v(n);
	stack<pair<int, int>> st;
	for (auto& i : v)cin >> i;
	long long ans = 0;

	for (int i = 0; i < n; i++) {
		int now = 1;
		while (!st.empty() && st.top().first <= v[i]) {
			if (st.top().first == v[i]) {
				now = st.top().second + 1;
			}
			else {
				now = 1;
			}
			ans += st.top().second;
			st.pop();
		}

		if (!st.empty())ans++;
		st.push({ v[i], now });
	}

	cout << ans;
}