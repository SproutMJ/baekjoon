#include <iostream>
#include <cstring>
using namespace std;
int n, m;
int dp[14 * 14][1 << 14];
int fun(int board, int bit) {
	if (board == n * m && bit == 0)return 1;
	if (board >= n * m) return 0;

	int& ret = dp[board][bit];
	if (~ret) return ret;
	if (dp[board][bit] != -1)return dp[board][bit];

	ret = 0;
	if (bit & 1) ret = fun(board + 1, (bit >> 1));
	else {
		ret += fun(board + 1, (bit >> 1) | (1 << (m - 1)));
		if ((board % m) != (m - 1) && (bit & 2) == 0)ret += fun(board + 2, bit >> 2);
	}
	return ret %= 9901;
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	cin >> n >> m;
	memset(dp, -1, sizeof(dp));
	cout << fun(0, 0);

	return 0;
}