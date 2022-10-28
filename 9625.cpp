#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
pair<int, int> dp[46];
pair<int, int> f(int n) {
	if (n == 0)return { 1,0 };
	if (dp[n] != make_pair(0, 0))return dp[n];
	
	pair<int, int> n_1 = f(n - 1);
	return make_pair(n_1.second, n_1.first + n_1.second);
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	cout << f(n).first << " " << f(n).second;
}