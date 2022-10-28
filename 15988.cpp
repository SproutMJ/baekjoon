#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int dp[1000001];
unsigned long long  fun(unsigned long long n) {
	if (n == 0)return 1;
	if (n == 1)return 1;
	if (n == 2)return 2;
	if (dp[n] != 0)return dp[n];

	return dp[n] = (fun(n - 1) + fun(n - 2) + fun(n - 3)) % 1000000009;

}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << fun(n) << "\n";
	}
}