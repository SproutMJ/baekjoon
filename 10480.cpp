#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		int x;
		cin >> x;
		if (x % 2 == 0)cout << x << " is even\n";
		else cout << x << " is odd\n";
	}
}