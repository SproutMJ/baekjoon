#include <iostream>
#include <numeric>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, ans = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
		if (gcd(n, i) == 1)ans++;

	cout << ans;
}