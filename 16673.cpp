#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t, k, p, ans = 0;
	cin >> t >> k >> p;

	for (int i = 0; i <= t; i++)
		ans += (k * i + p * i * i);

	cout << ans;
}