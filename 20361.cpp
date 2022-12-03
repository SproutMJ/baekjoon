#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, x, k;
	cin >> n >> x >> k;

	while (k--) {
		int a, b;
		cin >> a >> b;

		if (a == x) x = b;
		else if (b == x)x = a;
	}

	cout << x;
}