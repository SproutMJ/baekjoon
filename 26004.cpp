#include <iostream>
#include <queue>
#include <map>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string imo = "HIARC";
	map<char, int> st;
	int n;
	cin >> n;
	string s;
	cin >> s;

	for (const auto ch : s) {
		if (st.find(ch) == st.end()) {
			st[ch] = 1;
			continue;
		}
		st[ch] = ++st[ch];
	}

	int ans = INT_MAX;
	for (const char ch : imo) {
		if (st.find(ch) == st.end()) {
			cout << 0;
			return 0;
		}
		ans = min(ans, st[ch]);
	}

	cout << ans;
}