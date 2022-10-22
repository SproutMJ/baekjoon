#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
unsigned long long  dp[36];
unsigned long long  f(unsigned long long n) {
	if (n == 0)return 1;
	if (dp[n] != 0)return dp[n];

	for (int i = 0; i < n; i++)
		dp[n] += f(i) * f(n - i - 1);

	return dp[n];
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	unsigned long long n;
	cin >> n;
	cout << f(n);
}