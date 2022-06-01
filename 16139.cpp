#include <iostream>
using namespace std;
int q, sum[222222][26];
string s;

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL); cin.tie(NULL);

	cin >> s;
	for (int i = 0; i < s.length(); ++i) {
		if (i != 0)
			for (int k = 0; k < 26; ++k)
				sum[i][k] = sum[i - 1][k];
		int now = s[i] - 'a';
		sum[i][now]++;
	}

	cin >> q;
	for (int i = 0; i < q; ++i) {
		char ch;
		int l, r;
		cin >> ch;
		cin >> l >> r;

		int p1 = l > 0 ? sum[l - 1][ch - 'a'] : 0;
		cout << sum[r][ch - 'a'] - p1 << '\n';
	}
}