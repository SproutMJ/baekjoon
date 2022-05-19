#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	while (1) {
		int n, m;
		cin >> n >> m;
		if (n == 0 && m == 0)return 0;
		unordered_map<int, bool> st;
		int t;
		for (int i = 0; i < n; i++) {
			cin >> t;
			st.insert({ t, 1 });
		}
		
		int ans = 0;
		for (int i = 0; i < m; i++) {
			cin >> t;
			if (st.find(t) != st.end())ans++;
		}
		cout << ans << "\n";
	}
}