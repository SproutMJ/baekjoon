#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;

		int ans = 0;
		if (a >= 10)ans++;
		if (b >= 10)ans++;
		if (c >= 10)ans++;

		cout << a << " " << b << " " << c << "\n";
		if (a < 10 && b < 10 && c < 10)cout << "zilch";
		else if (ans == 1)cout << "double";
		else if (a >= 10 && b >= 10 && c >= 10)cout << "triple-double";
		else cout << "double-double";
		cout << "\n\n";
	}
}