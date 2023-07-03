#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	string s;
	cin >> n >> s;

	string ans = "";
	int i = 0;
	while (i < s.length()) {
		ans += s[i];
		i += n;
	}

	cout << ans;
}