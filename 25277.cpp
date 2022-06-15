#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t, ans = 0;
	cin >> t;

	while (t--) {
		string s;
		cin >> s;
		if (s == "he" || s == "him" || s == "she" || s == "her")ans++;
	}

	cout << ans;
}