#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	double ans = 0, div = 0;
	cin >> n;
	while (n--) {
		double a;
		cin >> a;
		if (a >= 0) {
			ans += a;
			div++;
		}
	}

	cout << ans / div;
}