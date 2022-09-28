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

	int ans = 0;
	for (int i = 0; i < n / 2; i++) {
		if (s[i] != s[s.length() - 1 - i])ans++;
	}

	cout << ans;
}