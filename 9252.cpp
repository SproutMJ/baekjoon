#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int dp[1001][1001];
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string s, ss;
	cin >> s >> ss;

	int l = s.length();
	int ll = ss.length();

	for (int i = 1; i <= l; i++)
		for (int j = 1; j <= ll; j++)
			if (s[i-1] == ss[j-1])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);

	cout << dp[l][ll] << "\n";


	stack<char> st;
	while (dp[l][ll] != 0) {
		if (dp[l][ll] == dp[l][ll - 1])
			ll--;
		else if (dp[l][ll] == dp[l - 1][ll])
			l--;
		else if (dp[l][ll] - 1 == dp[l - 1][ll - 1]) {
			st.push(s[l - 1]);
			l--;
			ll--;
		}
	}

	while (!st.empty()) {
		cout << st.top();
		st.pop();
	}
}