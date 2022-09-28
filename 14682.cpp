#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, k;
	cin >> n >> k;
	int ans = n;
	while (k--) {
		n *= 10;
		ans += n;
	}

	cout << ans;
}