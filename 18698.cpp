#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;

		int ans = 0;
		for (const auto& i : s)
			if (i == 'U')ans++;
			else break;
		cout << ans << "\n";
	}
}