#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	unordered_map<char, char> mp;
	mp['b'] = 'd';
	mp['d'] = 'b';
	mp['p'] = 'q';
	mp['q'] = 'p';
	mp['i'] = 'i';
	mp['o'] = 'o';
	mp['v'] = 'v';
	mp['w'] = 'w';
	mp['x'] = 'x';

	while (true) {
		string s;
		cin >> s;
		if (s == "#") break;

		reverse(s.begin(), s.end());
		string ans = "";
		for (const auto& i : s)
			if (mp.find(i) == mp.end()) {
				ans = "INVALID";
				break;
			}
			else ans += mp[i];

		cout << ans << "\n";
	}
}