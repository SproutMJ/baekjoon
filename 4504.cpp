#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	while (1) {
		int x;
		cin >> x;
		if (x == 0)return 0;

		if (x % n == 0)cout << x << " is a multiple of " << n << ".\n";
		else cout << x << " is NOT a multiple of " << n << ".\n";
	}
}