#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	int a, b, c;
	cin >> n >> a >> b >> c;

	int ans = min(n, a) + min(n, b) + min(n, c);
	cout << ans;
}