#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int dp[31][31];
int f(int n, int k) {
	if (n == k || k == 0)return 1;
	if (dp[n][k] != 0)return dp[n][k];
	return dp[n][k] = f(n - 1, k - 1) + f(n - 1, k);
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, k;
	cin >> n >> k;

	cout << f(n - 1, k - 1);
}