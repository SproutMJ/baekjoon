#include <iostream>
#include <bitset>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string s;
	cin >> s;
	int ans = 0;
	int n;
	cin >> n;
	while (n--) {
		string ss;
		cin >> ss;
		if (s == ss) ans++;
	}

	cout << ans;
}