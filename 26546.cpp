#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		string s;
		int a, b;
		cin >> s >> a >> b;

		string ans = "";
		for (int i = 0; i < s.length(); i++) {
			if (a <= i && i < b)
				continue;
			ans += s[i];
		}

		cout << ans << "\n";
	}
}