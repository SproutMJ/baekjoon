#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	int t, ans = 0;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		ans += a * b;
	}

	cout << ((ans == n) ? "Yes" : "No");
}