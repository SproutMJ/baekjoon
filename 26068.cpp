#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int ans = 0, n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;

		string v = "";
		for (int i = 2; i < s.length(); i++)
			v += s[i];
		if (stoi(v) <= 90)
			ans++;
	}

	cout << ans;
}