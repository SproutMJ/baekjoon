#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string s, ans = "";
	cin >> s;
	for (int i = 1; i <= s.length() - 2; i++)
		for (int j = 1; i + j <= s.length() - 1; j++) {
			string a = s.substr(0, i);
			string b = s.substr(i, j);
			string c = s.substr(i + j);
			reverse(a.begin(), a.end());
			reverse(b.begin(), b.end());
			reverse(c.begin(), c.end());
			if (ans == "")ans = a + b + c;
			else ans = ((ans < a + b + c) ? ans : a + b + c);
		}
	cout << ans;
}